#include<bits/stdc++.h>
#include "user.pb.h"
using namespace std;
#define userFile "user_data.dat"

User l_user;
bool logged = false;


// hash function for encrypt the password
string hash_password(const char *str)
{
    unsigned int hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return to_string(hash);
}

bool login(const char *username, const char *password){
    ifstream file(userFile,ios::binary);
    if(file.is_open()){
        string serializedUser ((istreambuf_iterator<char>(file)),(istreambuf_iterator<char>()));
        string hash_passwd = hash_password(password);
        User user;
        user.ParseFromString(serializedUser);
        // cout<<user.email()<<endl;
        // cout<<user.psswd_hash()<<endl;
        if(user.email() == username && user.psswd_hash() == hash_passwd){
            cout << "Login Successful" << endl;
            l_user.ParseFromString(serializedUser);
            logged = true;
            return true;
        }
        else{
            cout << "Login Failed" << endl;
            return false;
        }
    }
    return false;
}
bool registerUser(const char* name, const char* location , const char*email,const char* password){
    ifstream file(userFile,ios::binary);
    try{
        if(file.is_open()){
            string serializedUser ((istreambuf_iterator<char>(file)),(istreambuf_iterator<char>()));
            User user;
            user.set_email(email);
            user.set_psswd_hash(hash_password(password));
            user.set_name(name);
            user.set_address(location);
            user.SerializeToString(&serializedUser);
            ofstream file2(userFile,ios::binary);
            file2.write(serializedUser.c_str(),serializedUser.size());
            file2.close();
            cout << "Registration Successful" << endl;
            return true;
        }
    }catch(exception& ex){
        cout<<(ex.what());
        return false;
    }
    return false;
}

void createNotepad(){}
void deleteNotepad(){}
void editNotepad(){}
void logginedUser(){
    if(!logged)return;
    int option;
    do{
        system("clear");
        cout<<"Welcome "<<l_user.name()<<endl;
        cout<<"Choose options:"<<endl;
        cout<<"1.Create a notpad"<<endl;
        cout<<"2.Edit existing notepad"<<endl;
        cout<<"3.Delete existing notepad"<<endl;
        cout<<"4.Logout && Exit"<<endl;
        cin>>option;
        switch(option){
            case 1:
                createNotepad();
                break;
            case 2:
                editNotepad();
                break;
            case 3:
                deleteNotepad();
                break;
            case 4:
                logged = false;
                break;
        }

    }while(option < 4);
}

int main(){

    string email,password,name,address;
    cout<<"Choose an options..."<<endl;
    cout<<"1.Login"<<endl;
    cout<<"2.Register"<<endl;
    cout<<"3.Exit"<<endl;
    int option;
    cin>>option;
    switch(option){
        case 1:
            cout<<"Enter your email :";
            cin>>email;
            cout<<"\nEnter your password :";
            cin>>password;
            if(login(email.c_str(),password.c_str()))logginedUser();
            break;
        case 2:
            cout<<"Enter your name :";
            getchar();
            getline(cin,name);
            cout<<"\nEnter you location :";
            cin>>address;
            cout<<"\nEnter your email :";
            cin>>email;
            cout<<"\nEnter your password :";
            cin>>password;
            registerUser(name.c_str(),address.c_str(),email.c_str(),password.c_str());
            break;
        case 3:
            cout<<"bye.."<<endl;
            exit(0);
            break;
        default:
            cout<<"Invalid option"<<endl;
            break;
    }




    return 0;
}
