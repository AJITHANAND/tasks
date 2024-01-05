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
    return false;
}

bool registerUser(const char* name, const char* location, const char* email, const char* password) {
    ifstream file(userFile, ios::binary);
    try {
        if (file.is_open()) {
            string serializedUser((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));
            file.close();
            User user;
            user.set_uid(email);
            user.set_email(email);
            user.set_psswd_hash(hash_password(password));
            user.set_name(name);
            user.set_address(location);
            user.set_project_count(0);
            serializedUser.clear();
            user.SerializeToString(&serializedUser);
            ofstream file2(userFile, ios::binary);
            file2.write(serializedUser.c_str(), serializedUser.size());
            file2.close();
            cout << "Registration Successful" << endl;
            return true;
        }
    } catch (exception& ex) {
        cout << ex.what() << endl;
        return false;
    }
    return false;
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
    project.set_name("Notepad "+to_string(l_user.project_count()));
    project.set_id(l_user.project_count() + 1);
    updateUserProjectCount(1);
    portal.add_projects()->CopyFrom(project);

    ofstream output_file(projectFile, ios::binary);
    output_file.write(portal.SerializeAsString().c_str(), portal.ByteSizeLong());
    output_file.close();

    // version
    // Versioning versioning;
    

    // versions.add_versions()->CopyFrom(version);

    ofstream output_file2(versionFile, ios::binary);
    output_file2.write(portal.SerializeAsString().c_str(), portal.ByteSizeLong());
    output_file2.close();
}

void deleteNotepad() {
}

void editNotepad() {

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