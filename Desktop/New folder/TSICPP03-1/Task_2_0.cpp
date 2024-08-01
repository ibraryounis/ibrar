/*=================================================================================
/* TSICPP03-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_0.
/*===================================================================================
/*  Write a function to calculate the area of a rectangle.
/*===================================================================================*/
#include<iostream>
using namespace std;
float area(float leng, float wid);
int main(void)
{
	float leng;
	float
	wid;
	cout<<"enter the length="<<endl;
	cin>>leng;
	cout<<"enter the width="<<endl;
	cin>>wid;
	cout<<"\n area="<<	area(leng,wid)<<endl;
	return 0;
}
float area(float leng, float wid)
{
	return(leng*wid);
}