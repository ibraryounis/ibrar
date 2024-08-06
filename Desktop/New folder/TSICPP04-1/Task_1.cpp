/*=================================================================================
/* TSICPP04-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 1.
/*===================================================================================
/*There are also two integer pointers named ptrA and ptrB.
Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.
/*===================================================================================*/
#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    int *ptrA, *ptrB;
    cout << "Enter the first integer (a): ";
    cin >> a;
    cout << "Enter the second integer (b): ";
    cin >> b;
    ptrA = &a;
    ptrB = &b;
    cout << "You entered: " << endl;
    cout << "a = " << *ptrA << endl; 
    cout << "b = " << *ptrB << endl; // Dereference ptrB to get the value of 'b'
    return 0;
}
