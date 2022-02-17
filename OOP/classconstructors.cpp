// a constructor is a special method that is autmatically called
// when an object of a class is created.

// To create a constructor we use the same name as the class 

#include <iostream>
#include <string>
using namespace std;

class myclass {
    public:
    //constructor
    myclass() {
        cout << "This is a constructor";
    }
};

class pclass {
    public:
    //attributes
    string name;
    string brand;
    int age;

    //constructor with parameters
    pclass(string x, string y, int n) {
        name = x;
        brand = y;
        age = n;
    }
};

int main() {
    myclass obj;
    pclass obj2("City", "Honda", 3);

    cout << obj2.name << " " << obj2.brand << " " << obj2.age;
    return 0;
}