#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // creating file
    ofstream myfile("test.txt");
    
    // writing to file
    myfile << "THis is a test file, created for sample"

    myfile.close();

    // variable to store output of textfile
    string mytext;

    // reading from file
    ifstream readfile("test.txt");
    while(getline (readfiles, mytext))
    {
        cout << mytext;
    }

    readfile.close();

}