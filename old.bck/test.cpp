#include <bits/stdc++.h>
using namespace std;

string generate_filename(int const project_id,int const version_id){
    return to_string(project_id) + "_version_" + to_string(version_id)+".ver.dat";
}