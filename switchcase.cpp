#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cout << "Enter a number between 1 to 5 ";
    cin >> x;

    switch(x){
        case 1:
        cout << "number 1" << endl;
        break;

        case 2:
        cout << " number 2" <<endl;
        break;

        default:
        cout << "ENter a valid number";
    }
}