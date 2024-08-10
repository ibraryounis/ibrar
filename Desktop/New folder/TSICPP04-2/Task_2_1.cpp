/*=================================================================================
/* TSICPP04-2: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_1.
/*===================================================================================
/*Create an array of strings using Dynamic Memory allocation using malloc/calloc
function. Then create separate functions for each of the operations mentioned below.
● print the array
● Get size of an element
● search for a specific string in the array
/*===================================================================================*/
#include <iostream>
#include <cstring>  // For strlen, strcmp
#include <cstdlib>  // For malloc, free
using namespace std;

// Function to print the array of strings
void printArray(char* arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

// Function to get the size of a specific string in the array
int getSizeOfElement(char* str) {
    return strlen(str);  // Returns the length of the string
}

// Function to search for a specific string in the array
int searchString(char* arr[], int size, const char* target) {
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i], target) == 0) {  // Compares the strings
            return i;  // Return the index where the string is found
        }
    }
    return -1;  // Return -1 if the string is not found
}

int main() {
    int size;
    
    // Input the number of strings
    cout << "Enter the number of strings: ";
    cin >> size;
    
    // Allocate memory for the array of strings
    char** arr = (char**)malloc(size * sizeof(char*));

    if (arr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    // Input each string
    cin.ignore();  // To ignore the newline character left by cin
    for (int i = 0; i < size; i++) {
        char temp[100];
        cout << "Enter string " << i + 1 << ": ";
        cin.getline(temp, 100);

        // Allocate memory for each string
        arr[i] = (char*)malloc((strlen(temp) + 1) * sizeof(char));
        
        if (arr[i] == nullptr) {
            cout << "Memory allocation failed!" << endl;
            return 1;
        }

        // Copy the input string to the allocated memory
        strcpy(arr[i], temp);
    }

    // Print the array of strings
    cout << "The array of strings:" << endl;
    printArray(arr, size);

    // Get the size of an element
    int elementIndex;
    cout << "Enter the index of the element to get its size: ";
    cin >> elementIndex;
    if (elementIndex >= 0 && elementIndex < size) {
        cout << "Size of element " << elementIndex << " is: " << getSizeOfElement(arr[elementIndex]) << " characters." << endl;
    } else {
        cout << "Invalid index!" << endl;
    }

    // Search for a specific string
    char target[100];
    cout << "Enter the string to search: ";
    cin.ignore();  // To ignore the newline character left by cin
    cin.getline(target, 100);
    int foundIndex = searchString(arr, size, target);
    if (foundIndex != -1) {
        cout << "String \"" << target << "\" found at index " << foundIndex << "." << endl;
    } else {
        cout << "String \"" << target << "\" not found in the array." << endl;
    }

    // Free the allocated memory
    for (int i = 0; i < size; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
