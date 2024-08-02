/*=================================================================================
/* TSICPP03-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_2.
/*===================================================================================
/*  Write a function that attempts to modify an integer value by passing it by reference.
/*===================================================================================*/
#include <iostream>
using namespace std;

void modifyValue(int &num) {
    num = 42; // Attempt to modify the value
    cout << "Inside modifyValue: " <<&num << endl;
}

int main() {
    int original = 10;
    cout << "Before modifyValue: " << original << endl;
    modifyValue(original);
    cout << "After modifyValue: " << &original << endl;
    
    return 0;
}
