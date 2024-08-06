/*=================================================================================
/* TSICPP04-2: Teresol
/* Name : Ibrar Younis
/* Task No.: 1_x.
/*===================================================================================
/*Write a single C program that performs all the tasks as mentioned below. For each
task, make a separate function and test its functionality by calling it in main.
01. change the value of a constant integer using pointers
02. concatenate two strings using pointer
03. Reverse an array using pointers

/*===================================================================================*/

#include<stdio.h>
#include <string.h>
void temp(int *a, int*b)
{
    int temp = *a;
    *a=*b;
    *b=*a;
}
void reverse(int array[],int array_size)
{
    // pointer1 pointing at the beginning of the array
    int *pointer1 = array,
 
        // pointer2 pointing at end of the array
        *pointer2 = array + array_size - 1;
    while (pointer1 < pointer2) {
        swap(pointer1, pointer2);
        pointer1++;
        pointer2--;
    }
}
// Function to print the array
void print(int* array, int array_size)
{
    // Length pointing at end of the array
    int *length = array + array_size,
 
        // Position pointing to the beginning of the array
        *position = array;
    printf("Array = ");
    for (position = array; position < length; position++)
        printf("%d ", *position);
}
int main() {
   int value = 40;
    const int *ptr;
    ptr = &value;  // Point ptr to the address of value
    printf("%d\n", *ptr);
    // *ptr = 35;  
    value = 35;
    printf("%d\n", *ptr);  // Print the value pointed to by ptr after changing value
    
char str1[200] ;
char str2[300] ;
printf("\n Enter first string = ");
gets(str1);
printf("\n Enter second string = ");
gets(str2);
// Concatenate str2 to str1 (result is stored in str1)
strcat(str1, str2); //stract is function

// Print str1
printf("\n%s", str1);
printf("\nconcatenate = %s",str1);
// Array to hold the values
    int array[] = { 2, 4, -6, 5, 8, -1 };
 
    printf("Original ");
    print(array, 6);
 
    printf("Reverse ");
    reverse(array, 6);
    print(array, 6);
    
    return 0;
}

