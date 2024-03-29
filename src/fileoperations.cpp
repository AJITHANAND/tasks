#include "../include/fileoperations.hpp"


const bool fileOperations::fileExists(string filename)  {
    ifstream file(filename,ios::binary);
    if (!file.is_open()) {
        return true;
        ofstream file2(filename);
        if (!file2.is_open()) {
            return false;
        }
        file2.close();
    }
    file.close();
    return true;
}

const string fileOperations::currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
    return buf;
}

void fileOperations::replaceFirstOccurence(string& s,string const& toReplace,string const& replaceWith) {
    size_t pos = s.find(toReplace);
    if (pos == string::npos) return;
    s.replace(pos, toReplace.length(), replaceWith);
}

void fileOperations::replaceAllOccurences(string& s,string const& toReplace,string const& replaceWith) {
    size_t pos = 0;
    while ((pos = s.find(toReplace, pos))!= string::npos) {
        s.replace(pos, toReplace.length(), replaceWith);
        pos += replaceWith.length();
    }
}