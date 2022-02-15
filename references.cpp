// A reference variable is a reference to an existing variable and it is created using &operator;
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string &meal = food;

  cout << food << "\n"; //ouputs pizza
  cout << meal << "\n"; //also outputs pizza as it is refrenced to variable food
  
  cout << "Memory location of variable food is " << &food;
  return 0;
}