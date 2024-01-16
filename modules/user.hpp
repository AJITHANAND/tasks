#ifndef USER_HPP
#define USER_HPP
#include<bits/stdc++.h>
#include "fileOpr.hpp"
#include "../protobufs/user.pb.h"
// #define users_file "Users.dat"
#define endl "\n";
const string users_file = "users.dat";

using namespace std;

class Users{
    User user;
    UserPortal users;
    int total_accounts =-1;


    string hashPassword(const char *str) {
        unsigned int hash = 5381;
        int c;

        while ((c = *str++))
            hash = ((hash << 5) + hash) + c;

        return to_string(hash);
    } 

    bool accountExists(const char *str) {
        //todo: implement account existence
        return true;
    }
    string fetchUserData(){
        ifstream file(users_file,ios::binary);
        string serialized_users((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));
        return serialized_users;
    }
    void loadUserData(){
        this->users = UserPortal();
        string serialized_users = this->fetchUserData();
        this->users.ParseFromString(serialized_users);
    }
    int totalAccount(){
        //imp
        users.ParseFromString(fetchUserData());
        return users.user_size();
    }

    public:
        bool logged_in =false;
        Users(){
            fileOperations::fileExists(users_file);
        }
        bool Login(string username, string password){
            ifstream in_file(users_file,ios::binary);
            if(!in_file.is_open())return false;
            this->loadUserData();
            total_accounts = users.user_size();
            // cout<<users.ByteSizeLong()<<endl;
            // cout<<"total size"<<users.user_size()<<endl;
            for(int i =0 ;i<users.user_size() ;i++){
                cout<<users.user(i).name()<<endl;
                if(users.user(i).email() == username && users.user(i).psswd_hash() == hashPassword(password.c_str())){
                    user = users.user(i);
                    logged_in = true;
                    return true;
                }
            }
            // cout<<"not found"<<endl;
            return false;
        }
        bool registerUser(const char* name, const char* location, const char* email, const char* password) {

            
            // Register the user
            if(total_accounts<0){
                totalAccount();
            }
            total_accounts++;
            user.set_uid(total_accounts);
            user.set_email(email);
            user.set_psswd_hash(hashPassword(password));
            user.set_name(name);
            user.set_address(location);
            user.set_project_count(0);
            users.add_user()->CopyFrom(user);
            // save 
            ofstream opf(users_file, ios::binary);
            opf.write(users.SerializeAsString().c_str(),users.ByteSizeLong());
            opf.close();
            cout << "Registration Successful" << endl;
            logged_in = true;
            this->loadUserData();
            return true;
        }
        bool logout(){
            this->logged_in = false;
            this->user = User();
            return true;
        }
        string getName(){
            if(!this->logged_in) return "not logged in";
            return this->user.name();
        }
        int getId(){
            if(!this->logged_in) return -1;
            return this->user.uid();
        }
        int getProjectCount(int user_id){
            if(!this->logged_in) return -1;
            return this->users.user(user_id).project_count();;
        }
        bool updateProjectCount(int user_id){
            if(!this->logged_in) return false;
            for(int i = 0; i < this->users.user_size(); i++){
                if (this->users.user(i).uid() == user_id){
                    this->users.mutable_user(i)->set_project_count(this->users.user(i).project_count()+1);
                    ofstream opf(users_file, ios::binary);
                    opf.write(users.SerializeAsString().c_str(),users.ByteSizeLong());
                    opf.close();
                    this->loadUserData();
                    cout<<"project count updated"<<endl;
                    cout<<this->users.user(i).project_count()<<endl;
                    return true;
                }
            }
            return false;
        }
        void info(){
            if(!this->logged_in) return;
            this->loadUserData();
            cout<<this->user.uid()<<endl;
            cout<<this->user.name()<<endl;
            cout<<this->user.email()<<endl;
            cout<<this->user.address()<<endl;
            cout<<this->user.psswd_hash()<<endl;
            cout<<this->user.project_count()<<endl;
        }
};




#endif
