//protobuf_sample.cc
#include <iostream>
#include <fstream>
#include "projectmanagement.pb.h"

using namespace std;
int main()
{
    projectmanagement::Project project;
    project.set_name("Sample");
    project.set_url("http://www.sample.com");
 
    projectmanagement::Developer *developer = project.add_developer();
    developer->set_first_name("ABC");
    developer->set_last_name("XYZ");
    developer->set_email("someone@example.com");

    cout << "Project: " << project.name() << endl;
    cout << "URL: " << (company.has_url() ? company.url() : "N/A") << endl;
    cout << "Developers: " endl;
    cout << "First name: " << developer.first_name() << endl;
    cout << "Last name: " << developer.last_name() << endl;
    cout << "Email: " << developer.email() << endl;
    return 0;
}