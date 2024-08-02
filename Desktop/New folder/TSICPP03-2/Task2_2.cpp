/*=================================================================================
/* TSICPP03-2: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_2.
/*===================================================================================
/* C++ program to find the sum of all elements in an array using recursion.
/*===================================================================================*/
#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    // Base case
    if (n <= 0) {
        return 0;
    }
    // Recursive case: Sum of the current element and the sum of the remaining elements
    else{
    	return arr[n - 1] + sumArray(arr, n -1); //subtract 1 from last number+ 
}
	}
    

int main() {
   int n;
   cout<<"enter the size of array = "<<endl;
   cin>>n;
   int arr[n];
   cout<<"enter the elements of array="<<endl;
   for(int i=0;i<n;i++)
   {
   	cin>>arr[i];
   }
   int sum =sumArray(arr, n);
   cout<<"sum of elements = "<<sum<<endl;
   
}
