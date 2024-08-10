/*=================================================================================
/* TSICPP04-2: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_2.
/*===================================================================================
/*Write a program that dynamically allocates memory for a 2D array of integers,
initializes it with values, prints the array, and then deallocates the memory.
/*===================================================================================*/
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Ask user for the number of rows and columns
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Dynamically allocate memory for the 2D array using a single pointer
    int* array = new int[rows * cols];

    // Input elements of the array
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element at (" << i << ", " << j << "): ";
            cin >> array[i * cols + j];
        }
    }

    // Print the array
    cout << "The 2D array is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i * cols + j] << " ";
        }
        cout << endl;
    }

    // Deallocate the memory
    delete[] array;

    cout << "Memory deallocated successfully.\n";

    return 0;
}
