/*=================================================================================
/* TSICPP04-2: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_0.
/*===================================================================================
/*Create an integer array using Dynamic Memory allocation using new operator.
Then create separate functions for each of the operations mentioned below.
● print the array
● get size of an element
● search for a specific element
● find the largest integer

/*===================================================================================*/
#include <iostream>
using namespace std;

// Function to print the array
void printArray(int* arr, int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to get the size of an element
int getSizeOfElement() {
    return sizeof(int);
}

// Function to search for a specific element
bool searchElement(int* arr, int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

// Function to find the largest integer
int findLargest(int* arr, int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int size;

    // Input size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate memory for the array
    int* arr = new int[size];

    // Input elements of the array
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Print the array
    printArray(arr, size);

    // Get the size of an element
    cout << "Size of an element: " << getSizeOfElement() << " bytes" << endl;

    // Search for a specific element
    int elementToSearch;
    cout << "Enter the element to search: ";
    cin >> elementToSearch;
    bool found = searchElement(arr, size, elementToSearch);
    if (found) {
        cout << "Element " << elementToSearch << " is found in the array." << endl;
    } else {
        cout << "Element " << elementToSearch << " is not found in the array." << endl;
    }

    // Find the largest integer
    int largest = findLargest(arr, size);
    cout << "Largest element in the array is: " << largest << endl;

    // Deallocate the memory
    delete[] arr;

    return 0;
}
