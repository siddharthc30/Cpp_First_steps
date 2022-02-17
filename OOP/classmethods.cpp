// methods are functions that belong to classes
// There are two ways of defining a method
// 1. inside class definition
// 2. outside class definition


#include <iostream>
#include <string>
using namespace std;

class myclass {
    public:
    // method instide class definition
    void method1() {
        cout << "Method called and is executed";
    }
    void method2();
    int method3(int n);
};

// method outside class definition
void myclass::method2() {
    cout << "Method defined outside class called and executed";
}

//methods with parameters
int myclass::method3(int n) {
    return n;
    
}

int main() {
    myclass obj;
    obj.method1();
    obj.method2();
    cout << obj.method3(34);
    return 0;
}