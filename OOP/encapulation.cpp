// Encapulstion is basically hiding sensitive data from users.
// TO achieve this you must declare class variables or attributes as private.
// If you want others to read or modify the value of a private member, you can provide public get and set methods.

#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Set method
    void setSalary(int s) {
      salary = s;
    }
    // get method
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}