#include<bits/stdc++.h>
using namespace std;

#include "modules/user.hpp"
#include "modules/project.hpp"
#include "modules/versions.hpp"


class Notepad :public Users ,public Projects,public Versions{
    string pause;
    public :
    void init(){
        if(!this->Projects::init(this->getId()))return;
        this->showOptions();
    }

    void showOptions(){
        int option;
        do{
            cout<<"press enter to continue..."<<endl;
            getchar();
            getline(std::cin, pause);
            system("clear");
            cout << "Welcome " << this->getName() << endl;
            cout << "Choose options:" << endl;
            cout << "1. Create a notepad" << endl;
            cout << "2. List all projects"<<endl;
            cout << "3. Edit existing notepad" << endl;
            cout << "4. Get all project info" << endl;
            cout << "5. Logout && Exit" << endl;
            cout << "6. User info" << endl;
            cin >> option;

            switch (option) {
                case 1:
                    if(this->create(this->getProjectCount(getId()))){
                        if(updateProjectCount(getId())){
                            cout<<"notepad created successfully"<<endl;
                        }
                        else{
                            cout<<"notepad created , but project count not updated"<<endl;
                        }
                    }else{
                        cout<<"notepad creation failed";
                    }
                    break;
                case 2:
                    this->Projects::list();
                    break;
                case 3:
                    this->editOptions();
                    break;
                case 4:
                    this->getAllProjectsInfo();
                    break;
                case 5:
                    if(this->logout()){}
                    break;
                case 6:
                    this->Users::info();
                    getchar();
                    break;
                default:
                    cout << "Invalid option" << endl;
                    break;
            }
        } while (option != 5);
    }

    void editOptions(){
        int project_id;
        cout<<"Enter project ID: "<<endl;
        cin>>project_id;
        if(!this->verifyProjectID(project_id))return;
        int current_version = this->Projects::getVersion(project_id);
        int total_version = this->Projects::getTotalVersion(project_id);
        
        int choice;
        do {
        cout<<"press enter to continue..."<<endl;
        getchar();
        getline(std::cin, pause);
        system("clear");
        cout<< "Project ID: "<<project_id<<endl;
        cout<< "Current Version: "<<current_version<<endl;
        cout<< "Total Version: "<<total_version<<endl;
        cout << "Choose the options for edit"<<endl;
        cout << "1.Display contents"<<endl;
        cout << "2.Append contents to the end"<<endl;
        cout << "3.Update a line or entire file"<<endl;    
        cout << "4.Delete a line or entire file"<<endl;
        cout << "5.Revert a current version"<<endl;
        cout << "7.Exit"<<endl;
        cin >> choice;
        switch (choice) {
            case 1 :
                system("clear");
                cout << "All content of this version :"<<endl;
                if(current_version  == 0){
                    cout<<"No version yet available"<<endl;
                    getchar();
                    break;
                }
                this->Versions::info(this->getId(),project_id,current_version);
                break;
            case 2:
                if(this->Versions::append(this->getId(),project_id,current_version,total_version)){
                    if(this->Projects::updateVersion(project_id,total_version+1) && this->Projects::updateTotalVersion(project_id,total_version+1)){
                        cout<<"Contents appended to the end"<<endl;
                        current_version = total_version +1;
                        total_version++;
                    }else{
                        cout<<"New version is created but , either version number or total verison number is note updated"<<endl;
                    }
                }else{
                    cout<<"Contents appended to the end failed"<<endl;
                }
                break;
            case 3: 
                if(this->Versions::insertOrDelete(this->getId(),project_id,current_version,total_version,true)){
                    if(this->Projects::updateVersion(project_id,total_version+1) && this->Projects::updateTotalVersion(project_id,total_version+1)){
                        cout<<"Contents modified to the end"<<endl;
                        current_version = total_version +1;
                        total_version++;
                    }else{
                        cout<<"New version is created but , either version number or total verison number is note updated"<<endl;
                    }
                }else{
                    cout<<"Contents updations to the end failed"<<endl;
                }
                break;
            case 4:
                if(this->Versions::insertOrDelete(this->getId(),project_id,current_version,total_version,false)){
                    if(this->Projects::updateVersion(project_id,total_version+1) && this->Projects::updateTotalVersion(project_id,total_version+1)){
                        cout<<"Contents modified to the end"<<endl;
                        current_version = total_version +1;
                        total_version++;
                    }else{
                        cout<<"New version is created but , either version number or total verison number is note updated"<<endl;
                    }
                }else{
                    cout<<"Contents updations to the end failed"<<endl;
                }
                break;
            case 5:

                if(revert(getId(),project_id,current_version,total_version)){
                    current_version = getVersion(project_id);
                    cout<<"revert successful"<<endl;
                }else{
                    cout<<"revert failed"<<endl;
                }
             
                break;
            case 7: 
                
                break;
        }
        
    }while(choice !=7);
    }


};






int main(){

    Notepad note;
    

    string email, password, name, address;
    int option;

    

    do {

        cout << "Choose an option..." << endl;
        cout << "1. Login" << endl;
        cout << "2. Register" << endl;
        cout << "3. Exit" << endl;
        cout << "0. Dev" << endl;

        cin >> option;

        switch (option) {
        case 0:
            email = "ajith@gmail.com";
            password = "1234";
            if(note.Login(email, password)){
                cout << "Login Successful" << endl;
                note.init();
            }else{
                cout<<"users not found.. please register"<<endl;

            }
            break;
        case 1:
            cout << "Enter your email: ";
            cin >> email;
            cout << "\nEnter your password: ";
            cin >> password;
            if(note.Login(email, password)){
                cout << "Login Successful" << endl;
                note.init();
            }else{
                cout<<"users not found.. please register"<<endl;

            }
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
            note.registerUser(name.c_str(),address.c_str(),email.c_str(),password.c_str());
            break;
        case 3:
            
            cout << "Goodbye..." << endl;
            exit(0);
        default:
            cout << "Invalid option" << endl;
            break;
    }

    }while(option !=3);

    return 0;

}