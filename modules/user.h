#ifndef USER_H_
#define USER_H_
#include<bits/stdc++.h>
#include "fileOpr.h"
#include "../protobufs/user.pb.h"
// #define users_file "Users.dat"
#define endl "\n";
const string users_file = "users.dat";

using namespace std;

class Users{
    User user;
    UserPortal users;
    int total_accounts =-1;


    string hash_password(const char *str) {
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

    bool is_logged(){
        return logged_in;
    }

    string fetch_users_data(){
        ifstream file;
        string serialized_users((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));
        return serialized_users;
    }

    int total_account(){
        //imp
        users.ParseFromString(fetch_users_data());
        return users.users_size();
    }

    public:
        bool logged_in =false;
        Users(){
            fileExists(users_file);
        }
        bool Login(string username, string password){
            ifstream in_file(users_file,ios::binary);
            if(!in_file.is_open())return false;
            users.ParseFromString(fetch_users_data());
            in_file.close();
            total_accounts = users.users_size();
            cout<<"total size"<<users.users_size()<<endl;
            for(int i =0 ;i<users.users_size() ;i++){
                cout<<users.users(i).name()<<endl;
                if(users.users(i).email() == username && users.users(i).psswd_hash() == hash_password(password.c_str())){
                    user = users.users(i);
                    logged_in = true;
                    return true;
                }
            }
            cout<<"not found"<<endl;
            return false;
        }
        bool registerUser(const char* name, const char* location, const char* email, const char* password) {

            
            // Register the user
            if(total_accounts<0){
                total_account();
            }
            total_accounts++;
            user.set_uid(total_accounts);
            user.set_email(email);
            user.set_psswd_hash(hash_password(password));
            user.set_name(name);
            user.set_address(location);
            user.set_project_count(0);
            users.add_users()->CopyFrom(user);
            // save 
            ofstream opf(users_file, ios::binary);

            opf.write(users.SerializeAsString().c_str(),users.ByteSizeLong());
            opf.close();
            cout << "Registration Successful" << endl;
            logged_in = true;
            return true;
        }
        bool logout(){
            logged_in = false;
            user = User();
            return true;
        }
        string get_name(){
            if(!logged_in) return "not logged in";
            return user.name();
        }
};




#endif
