/*=================================================================================
/* TSICPP05-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 1-3.
/*===================================================================================
/*WWrite a program that concatenates two strings using dynamic memory allocation.
/*===================================================================================*/
#include <iostream>
#include <cstring> // For strlen and strcpy functions
using namespace std;

int main() {
    // Input the first string
    char *str1 = new char[100];  // Allocate memory for the first string
    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    // Input the second string
    char *str2 = new char[100];  // Allocate memory for the second string
    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    // Calculate the length of the concatenated string
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    int totalLength = length1 + length2 + 1; // +1 for the null terminator

    // Allocate memory for the concatenated string
    char *concatStr = new char[totalLength];

    // Copy the first string to the concatenated string
    strcpy(concatStr, str1);

    // Append the second string to the concatenated string
    strcat(concatStr, str2);

    // Output the concatenated string
    cout << "Concatenated string: " << concatStr << endl;

    // Deallocate the memory
    delete[] str1;
    delete[] str2;
    delete[] concatStr;

    return 0;
}
