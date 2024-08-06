/*=================================================================================
/* TSICPP04-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_1.
/*===================================================================================
/*Write a program that dynamically allocates memory for an array of integers of size
n, initializes the array, and then frees the memory.
/*===================================================================================*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int *arr= new int(n); //This line allocates memory for an array of n integers on the heap.
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value of Elements"<<i<<endl;
       cin>>arr[i];
    }

    // Print the values and their addresses
    cout << "Array values and their addresses:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i << ": " << arr[i] << " at address " << (arr + i) << endl;
    }

    // Free the allocated memory
    delete[] arr;

    // Set the pointer to nullptr to avoid dangling pointer
    arr = nullptr;

    return 0;

}