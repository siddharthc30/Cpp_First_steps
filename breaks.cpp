// using the break and continue keyword

// break statement is used to jump out of a loop

//continue statement is used to break one iteration of a loop when a condition occurs and continues with the next iteration


#include <iostream>
#include <string>

int main(){
    for (int i = 0; i<10; i++)
    {
        if(i == 4)
        {
            continue;
        }
        cout << i <<endl;
    }
}