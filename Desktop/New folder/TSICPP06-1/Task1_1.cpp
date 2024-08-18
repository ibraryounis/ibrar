/*=================================================================================
/* TSICPP06-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 1-1.
/*===================================================================================
/*Write a program and input two integers in main and pass them to the default
constructor of the class. Show the result of the addition of two numbers.
/*===================================================================================*/
#include <iostream>

using namespace std;

class Addition {
private:
    int num1;
    int num2;

public:
    // Default constructor that takes two integers
    Addition(int a, int b) {
        num1 = a;
        num2 = b;
    }

    // Member function to add the two numbers
    int getSum() {
        return num1 + num2;
    }
};

int main() {
    int a, b;

    // Input two integers from the user
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    // Create an object of Addition class and pass the two numbers
    Addition add(a, b);

    // Get the sum of the two numbers
    int sum = add.getSum();

    // Output the result
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;

    return 0;
}
