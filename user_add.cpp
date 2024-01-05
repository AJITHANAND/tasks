#include<bits/stdc++.h>
#include"user.pb.h"
using namespace std; 


bool save_user_data(string uid , string name , string email, string password,string address){
    User temp;
    temp.set_address(address);
    temp.set_name(name);
    temp.set_uid(uid);
    temp.set_email(email);
    temp.set_psswd_hash(password);
    
    string serializedUser;
    temp.SerializeToString(&serializedUser);

    ofstream outputFile("user_data.dat", ios::binary);
    if (outputFile.is_open()) {
        outputFile.write(serializedUser.c_str(), serializedUser.size());
        outputFile.close();
        return true;
    } else {
        return false;
    }
}

void read_datas(){
    ifstream inputFile("user_data.dat",ios::binary);
    if(inputFile.is_open()){
        string serializedUser((istreambuf_iterator<char>(inputFile)), (istreambuf_iterator<char>()));
        User user;
        if (!user.ParseFromString(serializedUser)) {
            cerr << "Failed to parse user data." << endl;
        }
        cout << user.name() << endl;
    }
}

int main() {

    // User user;
    // string uid = "dh12";
    // string name = "Ajith Anand";
    // string email = "temp@mail.com";
    // string loc = "India";
    // string hashedPassword = "aab1abe3e82159b3a5a086de84a1ec6f67daa18b10cbd2149637306058d65ffdd8053eda6f5cad1632f9754bc0640d8e9fc2b8e7538961f2412bcd8d229f3217";
    // if(save_user_data(uid,name,email,hashedPassword,loc)){
    //     cout << "User data saved to file." << endl;
    // }else{
    //     cerr << "Unable to open the file for writing." << endl;
    // }

    read_datas();

    return 0;
}