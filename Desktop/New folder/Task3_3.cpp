/*=================================================================
/* TSICPP02-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 3.
/*===================================================================================
/* program to demonstrate the scope and lifetime of local, global, and static
   variables. 
/*===================================================================================*/
#include <iostream>
using namespace std;
// var is a global variable
int var4 = 60;
void test()
{
// var is a static variable
static int var = 30;
cout << "Static variable var in test function: " << var << endl;
// var2 is a local variable
int var2 = 40;
cout << "Local variable var2 in test function: " << var2 << endl;
cout << "Global variable var4 in test function: " << var4 << endl;
}

int main()
{
// var3 is a local variable
int var3 = 90;
cout << "Local variable var3 in main function: " << var3 << endl;
cout << "Global variable var4 in main function: " << var4 << endl;
test();
test();
int var4 = 50;
cout << "Global variable var4 after test function calls in main: " << var4 << endl;
return 0;
}