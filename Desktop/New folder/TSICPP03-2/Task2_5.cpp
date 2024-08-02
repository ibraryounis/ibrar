/*=================================================================================
/* TSICPP03-2: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_5.
/*===================================================================================
/*Write a recursive function to find the nth Fibonacci number.
/*===================================================================================*/
#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Fibonacci sequence up to position " << n << " is: ";
    for (int i = 0; i <= n; i++) {
        cout << " "<<fib(i) << " ";
    }
    cout << endl;

    return 0;
}
