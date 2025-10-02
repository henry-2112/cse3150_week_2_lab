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

    getline(cin, name);
    getline(cin, email);

    string username = getUsername(email);
    parseName(name, firstName, lastName);

    cout << "First Name: " << *firstName << endl;
    cout << "Last Name: " << *lastName << endl;
    cout << "Username: " << username << endl;

    delete firstName;
    delete lastName;
    
    return 0;
}
