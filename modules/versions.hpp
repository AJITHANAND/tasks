#ifndef VERSION_HPP
#define VERSION_HPP
#include<bits/stdc++.h>
#include "../protobufs/version.pb.h"
#include "fileOpr.hpp"
using namespace std;


class Versions{
    Version version;
    string file_name;
    int current_version;
    int total_version;
    string new_file_name;
    Version new_version;
    public:

        void info(int user_id,int project_id,int version_id){
            this->file_name = to_string(user_id)+"_"+to_string(project_id)+"_version_"+to_string(version_id)+"_.dat";
            ifstream file(this->file_name,ios::binary);
            if(file.is_open()){
                if(this->version.ParseFromIstream(&file)){
                    system("clear");
                    std::cout << "Version ID: " << this->version.versionid() << '\n';
                    std::cout << "Operation Type: " << this->version.operation().type() << '\n';
                    std::cout << "Content: " << this->version.operation().content() << '\n';
                    std::cout << "Project ID: " << this->version.projectid() << '\n';
                    std::cout << "Time: " << this->version.time() << '\n';
                    std::cout << "------------------------\n";
                }else{
                    std::cerr << "Failed to parse protobuf data from file"<<endl;
                }
                file.close();
            }else{
                std::cerr << "Failed to open file"<<endl;
            }
        }

        bool append(int user_id,int project_id,int version_id,int total_version){
            Operaion ops;
            ops.set_type(Operaion_operaion_type_insert);
            if (!(version_id == 0 && total_version ==0)){
                this->file_name = to_string(user_id)+"_"+to_string(project_id)+"_version_"+to_string(version_id)+"_.dat";
                ifstream file(this->file_name,ios::binary);
                if(file.is_open()){
                    if(this->version.ParseFromIstream(&file)){
                        ops.set_content(version.operation().content());
                        file.close();
                    }else{
                        std::cerr << "Failed to parse protobuf data from file"<<endl;
                    }
                }
            }
            string data;
            cin.clear();
            cout<<"Enter data to append :";
            try{
                getchar();
                getline(cin,data);
            }catch(exception e){
                cout<<"Error occured while reading"<<endl;
                cout<<e.what()<<endl;
                return false;
            }
            ops.set_content(ops.content() + data);            
            new_file_name= to_string(user_id)+"_"+to_string(project_id)+"_version_"+to_string(total_version+1)+"_.dat";
            new_version.set_time(currentDateTime());
            new_version.set_projectid(project_id);
            new_version.set_versionid(total_version+1);
            if(new_version.IsInitialized()){
                new_version.clear_operation();
                new_version.mutable_operation()->CopyFrom(ops);
            }else{
                new_version.set_allocated_operation(&ops);
            }
            return saveState(new_file_name);
        }

        bool insertOrDelete(int user_id,int project_id,int version_id,int total_version ,bool mode_insert){
            Operaion ops;
            ops.set_type(Operaion_operaion_type_insert);
            if (!(version_id == 0 && total_version ==0)){
                this->file_name = to_string(user_id)+"_"+to_string(project_id)+"_version_"+to_string(version_id)+"_.dat";
                ifstream file(this->file_name,ios::binary);
                if(file.is_open()){
                    if(this->version.ParseFromIstream(&file)){
                        ops.set_content(version.operation().content());
                        file.close();
                    }else{
                        std::cerr << "Failed to parse protobuf data from file"<<endl;
                    }
                }
            }
            string sub,data = "";
            cout<<"Enter data to modify (substring):";
            getchar();
            getline(cin,sub);
            
            if (mode_insert){
                cout<<"Enter data for modify (data):";
                getchar();
                getline(cin,data);
            }
            string final =  ops.content();
            replaceAllOccurences(final,sub,data);

            ops.set_content(final);
            this->new_file_name= to_string(user_id)+"_"+to_string(project_id)+"_version_"+to_string(total_version+1)+"_.dat";
            this->new_version.set_time(currentDateTime());
            this->new_version.set_projectid(project_id);
            this->new_version.set_versionid(total_version+1);
            if(new_version.IsInitialized()){
                new_version.clear_operation();
                new_version.mutable_operation()->CopyFrom(ops);
            }else{
                new_version.set_allocated_operation(&ops);
            }
            return saveState(this->new_file_name);
        }

        bool saveState(string file_name){
            try{
                ofstream output_file(file_name, ios::binary);
                this->new_version.SerializeToOstream(&output_file);
                output_file.close();
                cout<<"New version saved.. successfully"<<endl;
                return true;
            }catch(exception e){
                cerr<<"Unable to save the version"<<endl;
                return false;
            }
        }
};



#endif // VERSION_H