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
     cout << " addres pointing to : " << num << endl;
      cout << "Adress of pointer: " << &num << endl;
}

int main() {                                                                                                                                                                
    int original = 10;
    
    cout << "Before modifyValue: " << original << endl;
     cout << "addres original: " << &original << endl;
    modifyValue(&original); 
    cout << "After modifyValue: " << original << endl;
    
    return 0;
}
