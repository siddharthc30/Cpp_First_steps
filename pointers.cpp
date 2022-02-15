// since using & symbol before a variable gives us the meory location og that variable
// A pointer is a variable that stores the memory address of a variable as its value
// pointer is created using * operator.
// A pointer variable points to data type of a same type.
// inshort the type of the pointer has to be same as the type of variable's address it is storing.

#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";  // A string variable
  string* ptr = &food;  // A pointer variable that stores the address of food

  // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Output the memory address of food with the pointer
  cout << ptr << "\n";

  cout << *ptr << endl; // deference: outputs the value of food using the pointer
  
  // modifying the pointer value
  // changing the pointer value will also change the value of the original variable.
  *ptr = "burger";

  cout << *ptr << endl;
  cout << food << endl;

  return 0;
}
