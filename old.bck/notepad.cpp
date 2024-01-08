#include<bits/stdc++.h>
#include "protobufs/user.pb.h"
#include "protobufs/project.pb.h"
#include "protobufs/version.pb.h"

using namespace std;

#define userFile "user_data.dat"
#define projectFile "project_data.dat"
#define versionFile "version_data.dat"

User l_user;
bool logged = false;

void updateUserProjectCount(int i) {
    l_user.set_project_count(l_user.project_count() + i);
    ofstream file(userFile, ios::binary);
    l_user.SerializeToOstream(&file);
    file.close();
}

bool fileExists(string filename){
    ifstream infile(filename);
    return infile.good();
}

const string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
    return buf;
}

void displayUserInfo(){
    if(!logged) return;
    cout << l_user.name() << endl;
    cout << l_user.email() << endl;
    cout << l_user.address() << endl;
    cout << l_user.psswd_hash()<<endl;
    cout<< "project count: " << l_user.project_count() << endl;
    string temp;
    getchar();
    // getline(std::cin, temp);
}

string hash_password(const char *str) {
    unsigned int hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c;

    return to_string(hash);
}

bool login(const char *username, const char *password) {
    ifstream file(userFile, ios::binary);
    if (file.is_open()) {
        string serializedUser((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));
        file.close();
        User user;
        user.ParseFromString(serializedUser);
        // cout<<user.email() << " "<<user.psswd_hash()<<endl;
        // cout<<username << " "<<hash_password(password)<<endl;
        if (user.email() == username && user.psswd_hash() == hash_password(password)) {
            cout << "Login Successful" << endl;
            l_user = user;
            logged = true;
            return true;
        } else {
            cout << "Login Failed" << endl;
            return false;
        }
    }
    cout<<"user data file not found..choose register account" << endl;
    return false;
}
bool fileExists() {
    ifstream file(userFile,ios::binary);
    if (!file.is_open()) {
        return true;
        ofstream file2(userFile);
        if (!file2.is_open()) {
            return false;
        }
        file2.close();
    }
    file.close();
    return true;
}
bool registerUser(const char* name, const char* location, const char* email, const char* password) {
    // create ifnot exists
    if(!fileExists()){
        cout<<"user data file not found.. exiting";
        exit(1);
    }

    // read for already registered user
    ifstream file(userFile, ios::binary);
    string serializedUser((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));
    file.close();
    User user;
    user.ParseFromString(serializedUser);

    if (user.email() == email) {
        return false;
    }

    // Register the user
    user.set_uid(email);
    user.set_email(email);
    user.set_psswd_hash(hash_password(password));
    user.set_name(name);
    user.set_address(location);
    user.set_project_count(0);

    // save 
    ofstream file2(userFile, ios::binary);
    user.SerializeToOstream(&file2);
    file2.close();

    cout << "Registration Successful" << endl;
    return true;
}

void createNotepad() {
    ifstream input_file(projectFile, ios::binary);
    projectPortal portal;

    if (input_file.is_open()) {
        string serializedProjects((istreambuf_iterator<char>(input_file)), (istreambuf_iterator<char>()));
        input_file.close();
        portal.ParseFromString(serializedProjects);
    }

    Project project;
    project.set_userid(l_user.uid());
    project.set_name("Notepad "+to_string(l_user.project_count()+1));
    project.set_id(l_user.project_count() + 1);
    project.set_currentversion(0);
    project.set_totalversion(0);
    updateUserProjectCount(1);
    portal.add_projects()->CopyFrom(project);

    ofstream output_file(projectFile, ios::binary);
    output_file.write(portal.SerializeAsString().c_str(), portal.ByteSizeLong());
    output_file.close();
}

void deleteNotepad() {
    cout <<"Enter notepad number :";
    int n;
    cin >> n;
    bool found = false;
    if(n < 1 || n > l_user.project_count()){
        cout << "Invalid notepad number";
        return;
    }
    ifstream input_file(projectFile, ios::binary);
    projectPortal portal;
    if (input_file.is_open()) {
        string serializedProjects((istreambuf_iterator<char>(input_file)), (istreambuf_iterator<char>()));
        input_file.close();
        portal.ParseFromString(serializedProjects);
    }
    for (int i = 0; i < portal.projects_size(); i++) {
        if (portal.projects(i).id() == n) {
            portal.mutable_projects(i)->Clear();
            // updateUserProjectCount(-1);
            found = true;
            break;
        }
    }
    ofstream output_file(projectFile, ios::binary);
    output_file.write(portal.SerializeAsString().c_str(), portal.ByteSizeLong());
    output_file.close();
    if(!found){
        cout << "Invalid notepad number";
        return;
    }
}

void displayVersionContents(string &file_name){
    Version version;
    std::ifstream input_file(file_name, std::ios::binary);
    if (input_file.is_open()) {
        if (version.ParseFromIstream(&input_file)) {
                std::cout << "Version ID: " << version.versionid() << '\n';
                std::cout << "Operation Type: " << version.operation().type() << '\n';
                std::cout << "Content: " << version.operation().content() << '\n';
                std::cout << "Project ID: " << version.projectid() << '\n';
                std::cout << "Time: " << version.time() << '\n';
                std::cout << "Version Number: " << version.versionnum() << '\n';
                std::cout << "------------------------\n";
        } else {
            std::cerr << "Failed to parse protobuf data from file: " << file_name << '\n';
        }
        input_file.close();
    } else {
        std::cerr << "Unable to open file: " << file_name << '\n';
    }
}

bool version_content_append(string &input_file_name,ofstream & output_file,int version_number,int total_version_id,int project_number){
    Version version;
    Operaion ops;
    cout<<input_file_name<<endl;
    std::ifstream input_file(input_file_name,std::ios::binary);
    ops.set_type(Operaion_operaion_type_insert);
    if (input_file.is_open()) {
        cout<<"inputfile is opened: "<< input_file_name<<endl;
        if(!version.ParseFromIstream(&input_file))return false;
        
        string input_content;
        cout<<"\nEnter content to append :"<<endl;
        getline(cin, input_content);
        ops.set_content(version.operation().content()+input_content);
        version.set_projectid(project_number);
        version.set_versionid(to_string(total_version_id));
        version.set_versionnum(to_string(version_number));
        version.set_time(currentDateTime());
        version.set_allocated_operation(&ops);
        version.SerializeToOstream(&output_file);
        input_file.close();

        // old
        // ops.set_content();
        // version.set_versionid(to_string(version_number));
        // version.set_allocated_operation(&ops);
        // version.set_projectid(project_number);
        // version.set_time(currentDateTime());
        // version.set_versionnum(to_string(version_number));
        // version.SerializeToOstream(&output_file);
        return true;
    }else{
        
    }
    return false;
    
}   
bool editVersion(int &version_id,int &total_version_id,int project_id) {
    ofstream ouput_version_file(to_string(project_id)+"_version_"+to_string(total_version_id+1)+".ver.dat",ios::binary);
    if (version_id == 0){
        cout <<"no version is available"<<endl;
    }else{
        ifstream input_file(to_string(project_id)+"_version_"+to_string(total_version_id)+".ver.dat",ios::binary);
        ouput_version_file << input_file.rdbuf();
        input_file.close();
    }

    // version is not updateing till a new version made
    // version_id++;
    // total_version_id++;

    string input_file_name,output_file_name,line;
    input_file_name = to_string(project_id)+"_version_"+to_string(version_id)+".ver.dat";
    output_file_name = to_string(project_id)+"_version_"+to_string(total_version_id+1)+".ver.dat";
    int choice;
    do {
        cout << "Choose the options for edit"<<endl;
        cout << "1.Display contents"<<endl;
        cout << "2.Append contents to the end"<<endl;
        cout << "3.Update a line"<<endl;
        cout << "4.Update entire file"<<endl;    
        cout << "5.Delete a line"<<endl;
        cout << "6.Delete entire file"<<endl;
        cout << "7.Exit"<<endl;
        cin >> choice;
        switch (choice) {
            case 1 :
                cout << "All content of this version :"<<endl;
                displayVersionContents(output_file_name);
                break;
            case 2:
                if(version_content_append(input_file_name,ouput_version_file,version_id,total_version_id,project_id)){
                    cout << "Contents appended"<<endl;
                }else{
                    cout << "Failed to append contents"<<endl;
                }
                break;
            case 3: 
                break;
            case 7: 
                ouput_version_file.close();
                return true;
                break;
        }
        
    }while(choice !=7);
    return false;
}


void editNotepad() {
    cout <<"Enter notepad number :";
    int notepad_num,idx;
    cin >> notepad_num;
    bool found = false;
    if(notepad_num < 1 || notepad_num > l_user.project_count()){
        cout << "Invalid notepad number";
        return;
    }
    ifstream input_file(projectFile, ios::binary);
    projectPortal portal;
    if (input_file.is_open()) {
        string serializedProjects((istreambuf_iterator<char>(input_file)), (istreambuf_iterator<char>()));
        input_file.close();
        portal.ParseFromString(serializedProjects);
    }
    for ( idx = 0; idx < portal.projects_size(); idx++) {
        if (portal.projects(idx).id() == notepad_num) {
            found = true;
            break;
        }
    }
    if(found){
        int currentVersion = portal.projects(idx).currentversion();
        int totalVersion = portal.projects(idx).totalversion();
        if(editVersion(currentVersion,totalVersion,notepad_num)){
            cout<<"Editing Done sucessfully";
            return;
        }else{
            cout<<"Editing Failed";
            return;
        }
    }else{
        cout << "Invalid notepad number";
        return;
    }
}


void listProjects() {
    ifstream input_file(projectFile, ios::binary);
    projectPortal portal;

    if (input_file.is_open()) {
        string serializedProjects((istreambuf_iterator<char>(input_file)), (istreambuf_iterator<char>()));
        input_file.close();
        portal.ParseFromString(serializedProjects);
    }

    for (int i = 0; i < portal.projects_size(); i++) {
        cout << portal.projects(i).name() << endl;
    }
}

void loggedInUser() {
    if (!logged) return;
    string temp;
    int option;
    do {
        cout<<"press enter to continue..."<<endl;
        getchar();
        getline(std::cin, temp);
        system("clear");
        cout << "Welcome " << l_user.name() << endl;
        cout << "Choose options:" << endl;
        cout << "1. Create a notepad" << endl;
        cout << "2. List all projects"<<endl;
        cout << "3. Edit existing notepad" << endl;
        cout << "4. Delete existing notepad" << endl;
        cout << "5. Logout && Exit" << endl;
        cout << "6. User info" << endl;
        cin >> option;

        switch (option) {
            case 1:
                createNotepad();
                break;
            case 2:
                listProjects();
                break;
            case 3:
                editNotepad();
                break;
            case 4:
                deleteNotepad();
                break;
            case 5:
                logged = false;
                break;
            case 6:
                displayUserInfo();
                getchar();
                break;
            default:
                cout << "Invalid option" << endl;
                break;
        }
    } while (option != 5);
}

int main() {
    string email, password, name, address;

    cout << "Choose an option..." << endl;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "3. Exit" << endl;
    cout << "0. Dev" << endl;

    int option;
    cin >> option;

    switch (option) {
        case 0:
            email = "ajith@gmail.com";
            password = "1234";
            if (login(email.c_str(), password.c_str())) loggedInUser();
            break;
        case 1:
            cout << "Enter your email: ";
            cin >> email;
            cout << "\nEnter your password: ";
            cin >> password;
            if (login(email.c_str(), password.c_str())) loggedInUser();
            break;
        case 2:
            cout << "Enter your name: ";
            getchar();
            getline(cin, name);
            cout << "\nEnter your location: ";
            cin >> address;
            cout << "\nEnter your email: ";
            cin >> email;
            cout << "\nEnter your password: ";
            cin >> password;
            registerUser(name.c_str(), address.c_str(), email.c_str(), password.c_str());
            break;
        case 3:
            cout << "Goodbye..." << endl;
            exit(0);
        default:
            cout << "Invalid option" << endl;
            break;
    }

    return 0;
}
