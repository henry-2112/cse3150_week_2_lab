#include <iostream>
#include "parser.h"
using std::cout;
using std::string;
using std::cin;
using std::endl;

namespace StringUtils{
    void parseName(const std::string& fullName, std::string* firstName, std::string* lastName){
        string n = fullName;
        string delimiter = " ";
        *firstName = n.substr(0, n.find(delimiter));
        *lastName = n.substr(n.find(delimiter) + 1);
    }

    std::string getUsername(const std::string& email){
        string s = email;
        string delimiter = "@";
        string username = s.substr(0, s.find(delimiter));
        return username; 
    }
}

