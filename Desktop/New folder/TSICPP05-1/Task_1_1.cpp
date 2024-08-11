/*=================================================================================
/* TSICPP05-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 1-1.
/*===================================================================================
/*Write a program that copies a string from one char pointer to another. Make sure
to handle null-termination correctly to avoid common errors.
/*===================================================================================*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 int max=9000;
 char str1[max];
 char str2[max];
 
 cout<<"Enter String = "<<endl;
 cin.get(str1,max,'$');
 int i;
 for(i=0;str1[i] !='0';i++)  // Copy the source string to the destination string
 {
   str2[i]=str1[i]; // Copy each character
 }
 str2[i] = '\0';  // Null-terminate the  string two
 // Output the copied string
    cout << "Copied string: " << str2 << endl;

    return 0;

}