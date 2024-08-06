/*=================================================================================
/* TSICPP04-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 3_0.
/*===================================================================================
/*Write a program that takes an integer input from the user, converts it to a float, and
prints the result.
/*===================================================================================*/
#include <iostream>  
using namespace std;  
int main ()  
{  
    int x, y;  
    float ans;  
    x = 78;  
    y = 157;  
    cout << " Implicit Type Casting: " << endl;  
    cout << " Result: " << y/x << endl; 
      
    cout << " \n Explicit Type Casting: " << endl;  

    ans = (float) 157 / 78;  
    cout << " The value of float variable (ans): " << ans << endl;  
      
    return 0;                                                                                     
}