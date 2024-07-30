/*=================================================================
/* TSICPP03-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 1_0.
/*===================================================================================
/* calculate the circumference of a circle. Use a macro to
define the value of 𝜋.
/*===================================================================================*/
#include<iostream>
using namespace std;
#define PI 3.14159265358979323846
int main()
{
	float radius,cirumference;
	cout<<"\nEnter the raduis of circle ="<<endl;
	cin>>radius;
	cirumference=2*PI*radius;
	cout<<"\nCirumference of circle ="<<cirumference<<endl;
}