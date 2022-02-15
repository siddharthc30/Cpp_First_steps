// Same keywords as java language, if, else, else if, switch

#include <iostream>
#include <string>
using namespace std;
int main() {
    if (10 > 2)
    {
        cout << "10 is larger" << endl;
    }
    else
    {
        cout << "10 is smaller" << endl;
    }

    // Short hand if else statement
    int x = 10;
    int y = 23;
    string result = (x < y) ? "10 is small" : "10 is large";

    cout << result;
}