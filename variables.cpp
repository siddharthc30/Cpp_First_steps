// in cpp there are different types of variables

// int - stores integers
// double - stores floating point numbers with decimals
// char - stores characters
// string - stores text
// bool - stores the two states i.e true or false.

#include <iostream>
#include <string>

using namespace std;
int main() {
    int num = 10;
    string s = "Hi";
    double d = 10.05;
    char c = 'A';
    bool t = true;

    cout << num << endl;
    cout << s << endl;
    cout << d << endl;
    cout << c << endl;
    cout << t << endl;
    // Displaying variables in output with text

    cout << "The value of num is " << num << endl;

    //Declaring multiple variables at once of same data type
    int x = 10, y = 20, z = 30;
    cout << "THe sum is " << x+y+z;

    // constants 
    const int number = 100;
    // number = 29; this will give you error because number is defined as a constant.



    return 0;

}