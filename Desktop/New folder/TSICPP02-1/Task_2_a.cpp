/*=================================================================
/* TSICPP02-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_a.
/*===================================================================================
/* takes an integer input (1-3) and prints a message based on the
  input using a switch statement.
/*===================================================================================*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the input option:"<<endl;
	cin>>num;
 switch(num)
 {
  case 1:
 		cout<<"You selected option 1."<<endl;
 		break;
  case 2:
 		cout<<"You selected option 2."<<endl;
 		break;
	case 3:
 		cout<<"You selected option 3."<<endl;
 		break;	 
	default:
 		cout<<"You selected invalid option "<<endl;
 		break;	 	
 }
}
