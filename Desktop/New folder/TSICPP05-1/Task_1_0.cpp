/*=================================================================================
/* TSICPP05-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 1-0.
/*===================================================================================
/*Write a C++ program to capitalise the first letter of each word in a given string.
Words must be separated by only one space.
/*===================================================================================*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 int max=9000;
 char str[max];
 int i;
 cout<<"Enter String = "<<endl;
 cin.get(str,max,'$');
 cout<<"You Enter the String = "<<endl;
 //cout<<str<<endl;
 for(int i=0;i< strlen(str);i++)
 {
    if(i==0) //his condition checks if the current character is the very first character in the string (i == 0).

    {
     str[i]=toupper(str[i]); //change first letter to upper case
    }
    else if(str[i]==' '&& str[i+1] !=' ') //This condition checks if the current character str[i] is a space ' ' and if the next character str[i+1] is not a space (' ').
    {
        str[i+1]=toupper(str[i+1]);
    }
 
 }
  cout<<str;
}