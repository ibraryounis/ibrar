/*=================================================================================
/* TSICPP04-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_2.
/*===================================================================================
/*Write a program that dynamically allocates memory for an array of integers,
initializes it with values, prints the array, and then deallocates the memory. Your program
should ask for the size of array and then the values to plug into that array
/*===================================================================================*/
#include<iostream>
using namespace std;
int main()
{
    int values;
    cout<<"Enter the size of an array"<<endl;
    cin>>values;
    double *arr= new double(values);
    for(int i=0;i<values;i++)
    {
        cout<<"Enter the Elements of array"<<i<<endl;
         cin>>arr[i];
    }
    
    cout << "Array values and their addresses:" << endl;
    for (int i = 0; i < values; i++) {
        cout << "Element " << i << ": " << /*arr[i]*/    *(arr + i) << " at address " << (arr + i) << "  Size: " <<sizeof(arr[i])<< endl;
    }

    arr=nullptr;
    delete []arr; // deallocate the memory
    
    return 0;
}