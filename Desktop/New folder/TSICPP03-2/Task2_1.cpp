/*=================================================================================
/* TSICPP03-2: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_1.
/*===================================================================================
/*  Write a recursive function to calculate the factorial of a number.
/*===================================================================================*/
#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1)
    {
      return 1;
    }
    else
    {
      return  n*fact(n-1);
    }
    
}
int main()
{
 int n;
 cout<<"enter the number=";
 cin>>n;

  cout<<"factorial of number=\n"<<fact(n)<<endl;
}