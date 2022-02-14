#include <iostream>
#include <string>
using namespace std;
int main() {
    string fname = "john";
    string lname = "doe";
    // concatinating strings
    
    //string name = fname + lname;
    string name = fname.append(lname);
    cout << name << endl;

    //length of a string
    int length = name.length();
    cout << length;

    // .size() and .length() will give the same output ie that length of the string
    
    //Accesing strings

    cout << name[0]; // this will print the first charater of name.

    // Reading raw strings from user
    string fullname;
    cout << " enter your name";
    getline(cin, fullname);
    cout << " YOur full name is" << fullname;

    return 0;
}