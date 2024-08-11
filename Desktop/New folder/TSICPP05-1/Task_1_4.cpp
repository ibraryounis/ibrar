/*=================================================================================
/* TSICPP05-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 1-4.
/*===================================================================================
/*Write a program that parses a CSV string and prints each value. Use strok() and
strok_r() functions.
/*===================================================================================*/
#include <iostream>
#include <cstring> // For strtok function
using namespace std;

int main() {
    const int max = 1000;  // Maximum length of the input string
    char csv[max];

    // Prompt the user for input
    cout << "Enter a CSV string: ";
    cin.getline(csv, max);

    // Use strtok to tokenize the string using the comma as the delimiter
    char *token = strtok(csv, ",");

    // Print each token
    while (token != nullptr) {
        cout << "\"" << token << "\" ";  // Print each token surrounded by quotes
        token = strtok(nullptr, ",");    // Get the next token
    }

    cout << endl;
    return 0;
}
