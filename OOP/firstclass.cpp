#include <iostream>
#include <string>
using namespace std;

// defining the class
class Myclass {
    public: //access specifier
    int num; //attribute 1
    string name; //attribute 2
};

int main() {
    Myclass obj; //creating an object of class Myclass

    // accessing the attributes of the object and assigning values
    obj.num = 10;
    obj.name = "joe";

    cout << obj.num << endl;
    cout << obj.name << endl;

    //creating multiple objects

    Myclass obj2;
    obj2.num = 78;
    obj2.name = "peter";

    return 0;
}