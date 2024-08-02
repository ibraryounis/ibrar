/*=================================================================================
/* TSICPP03-2: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_3.
/*===================================================================================
/* C++ program to find the sum of all elements in an array using recursion.
/*===================================================================================*/
#include <iostream>
using namespace std;

// Function to calculate the power of a number using recursion
int power(int base, int exp) {
    // Base case: any number raised to the power of 0 is 1
    if (exp == 0) {
        return 1;
    }
    // Recursive case: multiply base with the result of base^(exp-1)
    else {
        return base * power(base, exp - 1);
    }
}

int main() {
    int base, exp;
    
    // Asking the user to enter the base number
    cout << "Enter the base: ";
    cin >> base;

    // Asking the user to enter the exponent
    cout << "Enter the exponent: ";
    cin >> exp;

    // Calculating the power using the recursive function
    int result = power(base, exp);

    // Printing the result
    cout << base << "^" << exp << " = " << result << endl;

    return 0;
}
