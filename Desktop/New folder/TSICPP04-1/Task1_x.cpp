/*=================================================================================
/* TSICPP04-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 1_x.
/*===================================================================================
/*For
each task, make a separate function and test its functionality by calling it in main.
/*===================================================================================*/
#include <iostream>
#include <cstring>
using namespace std;
int swap(int *a, int *b) {
	int temp = *a;
	 *a= *b;
	 *b=temp;
	
	
}
    

// Function to add two numbers using pointers
int add(int *a, int *b)
{
	return *a + *b;
}
// Function to take input from user for array and print array elements with the addresses using pointer
void inputAndPrintArray(int *arr, int size) {
    cout << "Enter " << size << " elements:" << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Array elements with addresses:" << endl;
    for(int i = 0; i < size; i++) {
        cout << "Element " << arr[i] << " at address " << (arr + i) << endl;
    }
}

// Function to change the value of a constant integer using pointers
void changeValue(int *ptr, int newVal) {
    *ptr = newVal;
}

// Function to find length of string using pointer
int stringLength(const char *str) {
    const char *ptr = str;
    int length = 0;
    while(*ptr != '\0') 
    {
        length++;
        ptr++;
    }
    return length;
}

// Function to copy one string to another string using pointer
void stringCopy(char *dest, const char *src) {
    while(*src != '\0') 
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// Function to sum of array elements using pointers
int sumOfArray(const int *arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

// Function to search for an element in array using pointers
int searchElement(const int *arr, int size, int key) {
    for(int i = 0; i < size; i++) {
        if(*(arr + i) == key) {
            return i;
        }
    }
    return -1; // Not found
}

int main() {
    // 01. Swap two numbers using pointers
  int x,y;
	cout<<"======NUMBERS BEFORE SWAP============"<<endl;
   cout<<"Enter the number x = "<<endl;
   cin>>x;
   cout<<"Enter the number y = "<<endl; 
   cin>>y;
   cout<<"======NUMBERS AFTER SWAP============"<<endl;
   swap(&x,&y);
   cout<<"\n x = "<<x<<" \n y = "<<y<<endl;
    // 02. Add two numbers using pointers
    int sum=0;
	int a,b;

   cout<<"Enter the number a = "<<endl;
   cin>>a;
   cout<<"Enter the number b= "<<endl; 
   cin>>b;
   cout<<"\n a = "<<a<<"\nand"<<"\n b ="<<b<<"\n sum of a+b ="<<"\n"<<add(&a,&b)<<endl;

    // 03. Input and print array elements with addresses using pointers
  	int size,elements;
    cout << "Enter Size of Array = " <<endl;
	cin>>size;
	cout<< " Enter Elements of Array = ";
	cin>>elements;

   
    int arr[size];
    inputAndPrintArray(arr, size);
    cout << endl;

    // 04. Change the value of a constant integer using pointers
    int intValue = 20;
    cout << "Value before change: " << intValue << endl;
    changeValue(&intValue, 50);
    cout << "Value after change: " << intValue << endl;

    return 0;
    // 05. Find length of string using pointer
    const char str[] = "Hello, world!";
    int len = stringLength(str);
    cout << "Length of string '" << str << "' is " << len << endl << endl;

    // 06. Copy one string to another string using pointer
    char dest[50];
    stringCopy(dest, str);
    cout << "Source string: " << str << endl;
    cout << "Destination string after copy: " << dest << endl << endl;

    // 07. Sum of array elements using pointers
    int array[] = {1, 2, 3, 4, 5};
    int arraySum = sumOfArray(array, 5);
    cout << "Sum of array elements is " << arraySum << endl << endl;

    // 08. Search for an element in array using pointers
    int key = 3;
    int index = searchElement(array, 5, key);
    if (index != -1) {
        cout << "Element " << key << " found at index " << index << endl;
    } else {
        cout << "Element " << key << " not found in the array" << endl;
    }

    return 0;
}
