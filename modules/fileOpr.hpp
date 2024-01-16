#ifndef FILE_OPR_HPP
#define FILE_OPR_HPP
#include <bits/stdc++.h>
using namespace std;

namespace fileOperations{
    const bool fileExists(string filename);
    const string currentDateTime();
    void replaceFirstOccurence(string& s,string const& toReplace,string const& replaceWith);
    void replaceAllOccurences(string& s,string const& toReplace,string const& replaceWith);
}

#endif