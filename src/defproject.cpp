#include<bits/stdc++.h>
using namespace std;
#include "../include/project.hpp"
#include "../include/user.hpp"
#define endl "\n";

const string tail ="projects.dat";

void Projects::loadProjectData(){
    ifstream input_file(project_file,ios::binary);
    string serializedProjects((istreambuf_iterator<char>(input_file)), (istreambuf_iterator<char>()));
    input_file.close();
    portal.ParseFromString(serializedProjects);
}

Projects::Projects():user_id(-1){};

 bool Projects::init(int user_id){
    this->user_id=user_id;
    project_file=to_string(user_id)+"_"+tail;
    fileOperations::fileExists(project_file);
    loadProjectData();
    return user_id != -1;
}

bool Projects::create(int projects_count){
    this->loadProjectData();
    int modulo;
    cout<<"Enter modulo factor (5 - default): "<<endl;
    cin>>modulo;
    project.set_userid(user_id);
    project.set_name("Notepad "+to_string(projects_count+1));
    project.set_id(projects_count + 1);
    project.set_currentversion(-1);
    project.set_totalversion(-1);
    project.set_modulofactor(modulo);
    portal.add_projects()->CopyFrom(project);
    if(this->saveState()){
        return true;
    }else{
        return false;
    }
}

void Projects::list(){
    if (this->isEmpty()){
        cout << "No projects found" << endl;
        return;
    }
    for(int i=0;i<portal.projects_size();i++){
        cout<<portal.projects(i).name()<<endl;
    }
}

bool Projects::updateVersionAndTotal(int project_id, int total_version){
    this->loadProjectData();
    for(int i=0;i<portal.projects_size();i++){
        if(portal.projects(i).id()==project_id){
            portal.mutable_projects(i)->set_currentversion(total_version);
            portal.mutable_projects(i)->set_totalversion(total_version);
            if(this->saveState()){
                return true;
            }else{
                return false;
            }
        }
    }
    return false;
}

bool Projects::updateTotalVersion(int project_id, int new_total_version_number){
    this->loadProjectData();
    for(int i=0;i<portal.projects_size();i++){
        if(portal.projects(i).id()==project_id){
            portal.mutable_projects(i)->set_totalversion(new_total_version_number);
            if(this->saveState()){
                return true;
            }else{
                return false;
            }
        }
    }
    return false;
}

inline bool Projects::isEmpty(){
    return portal.projects_size() == 0;
}

inline bool Projects::saveState(){
    try{
        ofstream opf(project_file, ios::binary);
        opf.write(portal.SerializeAsString().c_str(),portal.ByteSizeLong());
        opf.close();
        return true;
    } catch(exception e){
        return false;
    }
}

bool Projects::verifyProjectID(int id){
    if(isEmpty()) {
        cerr<<"No projects found!"<<endl;
        return false;
    }
    
    if(id>portal.projects_size() || id < 0){
        cerr<<"Invalid project number!"<<endl;
        cerr<<"Total number of projects" <<portal.projects_size()<<endl;
        cerr<<"current project ID: "<<id<<endl;
        return false;
    }
    for(int i=0;i<portal.projects_size();i++){
        if (id == portal.projects(i).id()){
            return true;
        }
    }
    return true;
}

void Projects::getAllProjectsInfo(){
        for(int i=0;i<portal.projects_size();i++){
        cout<<"ID\t:"<<portal.projects(i).id()<<endl;
        cout<<"Name\t:"<<portal.projects(i).name()<<endl;
        cout<<"User ID\t:"<<portal.projects(i).userid()<<endl;
        cout<<"Pre Ver\t:"<<portal.projects(i).currentversion()<<endl;
        cout<<"Ful Ver\t:"<<portal.projects(i).totalversion()<<endl;
        cout<<"Modulo Factor\t:"<<portal.projects(i).modulofactor()<<endl;
        cout<<" --------------------------------------------------------" <<endl;
    }
}

inline int Projects::getVersion(int id){
    return portal.projects(id-1).currentversion();
}

inline int Projects::getTotalVersion(int id){
    return portal.projects(id-1).totalversion();
}

inline int Projects::getModuloFactor(int id){
    return portal.projects(id-1).modulofactor();
}

bool Projects::revert(int user_id , int project_id , int version_id,int total_version){
        cout<<"revert new version id :"<<endl;
        int revert_id ;
        cin>>revert_id;
        if(revert_id > total_version || revert_id <=0){
            cout<<"invalid revert id"<<endl;
            return false;
        }
        for(int i = 0 ; portal.projects_size();i++){
            if(user_id == portal.projects(i).userid() && project_id == portal.projects(i).id() && version_id == portal.projects(i).currentversion()){
                portal.mutable_projects(i)->set_currentversion(revert_id);
                return this->saveState();
            }
        }
        return false;
}