/*=================================================================================
/* TSICPP05-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 1-2.
/*===================================================================================
/*Write a program that extracts all integers from a given string and prints them.
/*===================================================================================*/
#include<iostream>
#include<cstring>
#include<cctype> // For isdigit function
using namespace std;

int main() {
    int max = 9000;
    char str[max];
    
    cout << "Enter String = " << endl;
    cin.get(str, max, '$');
    cout << "You Entered the String = " << endl;
    cout << str << endl;

    cout << "Extracted integers: ";

    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {  // Check if the current character is a digit
            cout << str[i];  // Print the digit

            // Check if the next character is not a digit (end of the number)
            if (!isdigit(str[i + 1])) {
                cout << " ";  // Add a space after the number
            }
        }
    }

    cout << endl;
    return 0;
}
