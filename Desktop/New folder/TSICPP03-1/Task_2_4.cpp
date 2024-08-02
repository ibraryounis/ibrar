/*=================================================================================
/* TSICPP03-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_4.
/*===================================================================================
/*  Write a function that compute the factorial of numbers.
/*===================================================================================*/
#include <iostream>
using namespace std;


int factorial(int n) {
if(n>0)
{
 int result = 1; // Initialize result to 1
    for (int i = 1; i <= n; i++) {
        result = result*i; 
    }
    return result;
}

}

int main() {
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    // Call the factorial function and display the result
    if (number < 0) {
        cout << "Invalid input. Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << number << " is " << factorial(number) << endl;
    }

    return 0;
}
