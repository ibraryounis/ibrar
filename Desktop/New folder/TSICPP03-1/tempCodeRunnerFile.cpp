/*=================================================================================
/* TSICPP03-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_3.
/*===================================================================================
/*  Write a function that attempts to modify an integer value by passing it by address.
/*===================================================================================*/
#include <iostream>
using namespace std;

void modifyValue(int *num) {
    *num = 66;
    cout << "Inside modifyValue: " << *num << endl;
}

int main() {
    int original = 10;
    int num = 23;
    cout << "Before modifyValue: " << original << endl;
    modifyValue(&original); 
    cout << "After modifyValue: " << num << endl;
    
    return 0;
}
