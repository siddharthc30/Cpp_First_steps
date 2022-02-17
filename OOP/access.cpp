// Access specifiers define how the members of the class can be accessed.
// three accesss specifiers
// public - members are accessible from outside of the class
// private - members cannot be accessed or viewed from outside of the class
// protected - members cannot be accessed from outside of the class. But, they can be accessed in inherited classes.

//by default all the members of the class are private.
#include <iostream>
#include <string>
using namespace std;

class myclass {
    //public attribute
    public:
    int x;

    //private attribute
    private:
    int y;
};

int main() {
    myclass obj;
    obj.x =10;
    obj.y = 45;
    return 0;
}
