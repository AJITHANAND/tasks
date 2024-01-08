#ifndef USER_H_
#define USER_H_
#include<bits/stdc++.h>
#include "fileOpr.h"
#include "../protobufs/user.pb.h"
#define users_file "Users.dat"
#define endl "\n";


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


    public:
        bool logged_in =false;
        Users(){
            fileExists(users_file);
        }
        bool Login(string username, string password){
            ifstream file(users_file,ios::binary);
            if(!file.is_open())return false;

            string serialized_users((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));
            file.close();
            users.ParseFromString(serialized_users);
            total_accounts = users.users_size();
            for(int i =0 ;i<users.users_size() ;i++){
                if(users.users(i).email() == username && users.users(i).psswd_hash() == hash_password(password.c_str())){
                    user = users.users(i);
                    logged_in = true;
                    cout<<"Login successful"<<endl;
                    return true;
                }
            }
            cout<<"users not found.. please register"<<endl;
            return false;

        }
        bool registerUser(const char* name, const char* location, const char* email, const char* password) {

            
            // Register the user
            user.set_uid(email);
            user.set_email(email);
            user.set_psswd_hash(hash_password(password));
            user.set_name(name);
            user.set_address(location);
            user.set_project_count(0);

            // save 
            ofstream opf(users_file, ios::binary);
            user.SerializeToOstream(&opf);
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
};




#endif
