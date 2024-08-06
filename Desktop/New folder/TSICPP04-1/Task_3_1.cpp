/*=================================================================================
/* TSICPP04-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 3_1.
/*===================================================================================
/*Write a program that uses a void pointer to store and print different types of data
(int, float, char)..
/*===================================================================================*/
#include<iostream>
using namespace std;
void Int(void *data)
{
   int *intptr = (int*)data;
   cout<<"Integers : "<< *intptr<<endl;
}
void Float(void *data)
{
    float *floatptr = (float*)data;
    cout<<"float numbers  : "<< *floatptr<<endl;
}
void Char(void *data)
{
    char *charptr = (char*)data;
    cout<<"charters : "<< *charptr<<endl;
}
int main()
{
    int i;
    float f = 3.14;
    char c = 'A';
    cout<<"enter the Integer number "<<endl;
    cin>>i;
    cout<<"enter the float number "<<endl;
    cin>>f;
    cout<<"enter the  character "<<endl;
    cin>>c;
    void* ptr;

    ptr = &i;
    Int(ptr);

    ptr = &f;
    Float(ptr);

    ptr = &c;
    Char(ptr);

    return 0;
}