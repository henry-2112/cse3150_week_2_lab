#include <iostream>
#include "parser.h"
using std::cout;
using std::string;
using std::cin;
using std::endl; 

using namespace StringUtils;

string name;
string email;

int main(){
    std::string* firstName = new std::string();
    std::string* lastName = new std::string();

    cout << "Enter full name: ";
    std::getline(std::cin, name);

    cout << "Enter email address: ";
    std::getline(std::cin, email);

    string username = getUsername(email);
    parseName(name, firstName, lastName);

    cout << *firstName << endl;
    cout << *lastName << endl;
    cout << username << endl;

    delete firstName;
    delete lastName;
    
    return 0;
}
