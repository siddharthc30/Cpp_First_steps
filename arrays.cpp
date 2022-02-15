//Arrays are used to store multiple values in a single variable.
// declaring an array -  arr[number of elemnets]

// you don't have to specify the size of the arry, it will take the number of
//elements in it by default.

#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars[0];
  for (int i=0; i<4; i++)
  {
      cout << cars[i] << endl;
  }
  return 0;
}
