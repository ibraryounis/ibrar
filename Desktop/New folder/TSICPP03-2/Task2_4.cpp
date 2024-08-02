/*=================================================================================
/* TSICPP03-2: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_4.
/*===================================================================================
/* Write a recursive function to find the Lowest common multiple (LCM) of two
numbers
/*===================================================================================*/
#include <iostream>
using namespace std;
//Function Signature: int LCM(int a, int b);
//Example: gcd(6, 8) should return 24.
int LCM(int a, int b)
{
 for(int i=2;i<13;i++)
 {
 	cout<<endl;
 	if(a%i==0)
 	{
 		if(b%i==0)
 		{
 			cout<<" ab i= "<<i<<" ";
 			return i*LCM(a/i,b/i);
		}
		else
		{
			cout<<" a. i= "<<i<<" ";
			return i*LCM(a/i,b);
		}
	 }
	 else if(b%i==0)
	 {
	 	cout<<" b i= "<<i<<" ";
	 	return i*LCM(a,b/i);
	 }
	 else if(a<2 && b < 2)
	 {
	 	cout<<" i= "<<1<<" ";
	 	return 1;
	 }
 }
}
int main()
{
	int a,b;
	cout<<"enter the first number  = "<<endl;
	cin>>a;
	cout<<"enter the second number   = "<<endl;
	cin>>b;
	 cout << "LCM of " << a << " and " << b << " is " << LCM(a, b) << endl;
	return 0;
}