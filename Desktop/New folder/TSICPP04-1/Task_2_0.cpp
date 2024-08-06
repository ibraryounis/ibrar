/*=================================================================================
/* TSICPP04-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_0.
/*===================================================================================
/*write a program to dynamically allocate memory for an integer pointer, assign it a
value and then free the memory.
/*===================================================================================*/
#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate memory for an integer
    int *p = new int;

    

    // Assign a value to the allocated memory
    *p = 40;

    // Print the value and the address of the allocated memory
    cout << "Value: " << *p << endl;
    cout << "Address: " << p << endl;

    // Free the allocated memory
    delete p;

    // Set the pointer to nullptr to avoid dangling pointer
    p = nullptr;

    return 0;
}
