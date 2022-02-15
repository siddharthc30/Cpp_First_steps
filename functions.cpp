#include <iostream>
#include <string>
using namespace std;

void first(string name) {
    cout << " this is the first function executed by " << name;
}

//default parameters
void second (string country = "India") {
    cout << "My country is " << country << endl;
}

// the void can be replaced by the data type that is returned by the function.

// passing references as a function
void swap(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main() {
    cout << " executing function" << endl;
    first("Peter");
    second();
    second("Germany");

    int n = 10;
    int m = 90;
    swap(n, m);
    count << n;
    count << m;

    return 0;
}


