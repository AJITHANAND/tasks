#include "../include/user.hpp"

string Users::hashPassword(const char *str) {
    unsigned int hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c;

    return to_string(hash);
}

bool Users::accountExists(const char *str) {
    if(total_accounts<0){
        totalAccount();
    }
    for(int i=0;i<users.user_size();i++){
        if(users.user(i).email()==str){
            return true;
        }
    }
    return false;
}

string Users::fetchUserData(){
    ifstream file(users_file,ios::binary);
    string serialized_users((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));
    return serialized_users;
}

void Users::loadUserData(){
    this->users = UserPortal();
    string serialized_users = this->fetchUserData();
    this->users.ParseFromString(serialized_users);
}

int Users::totalAccount(){
    //imp
    loadUserData();
    return users.user_size();
}

bool Users::Login(string username, string password){
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

bool Users::registerUser(const char* name, const char* location, const char* email, const char* password) {

    if (this->accountExists(email)) {
        cout << "Account already exists" << endl;
        return false;
    }

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
    try{
        ofstream opf(users_file, ios::binary);
        opf.write(users.SerializeAsString().c_str(),users.ByteSizeLong());
        opf.close();
        cout << "Registration Successful" << endl;
        logged_in = true;
        this->loadUserData();
        return true;
    }catch(exception e){
        total_accounts--;
        return false;
    }
    
}

bool Users::logout(){
    this->logged_in = false;
    this->user = User();
    return true;
}

string Users::getName(){
    if(!this->logged_in) return "not logged in";
    return this->user.name();
}

int Users::getId(){
    if(!this->logged_in) return -1;
    return this->user.uid();
}

int Users::getProjectCount(int user_id){
    if(!this->logged_in) return -1;
    return this->users.user(user_id).project_count();;
}

bool Users::updateProjectCount(int user_id){
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

void Users::info(){
    if(!this->logged_in) return;
    this->loadUserData();
    cout<<this->user.uid()<<endl;
    cout<<this->user.name()<<endl;
    cout<<this->user.email()<<endl;
    cout<<this->user.address()<<endl;
    cout<<this->user.psswd_hash()<<endl;
    cout<<this->user.project_count()<<endl;
}