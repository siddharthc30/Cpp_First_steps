// the fstream library allows you to work with files
// there are three classes in fstream library
// ofstream - creating and writing to files
// ifstream - reading from file
// fstream - combination of ofstream and ifstream: creates, reads adn writes to files

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //creating file
    ofstream myfile("test.txt");
    
    // writing to file
    myfile << "THis is a test file, created for sample"

    myfile.close();

}