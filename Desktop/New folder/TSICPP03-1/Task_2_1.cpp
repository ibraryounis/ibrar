/*=================================================================================
/* TSICPP03-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_1.
/*===================================================================================
/*  Write a function that attempts to modify an integer value by passing it by value.
/*===================================================================================*/
#include <iostream>
using namespace std;

void modifyValue(int original ) {
    original = 66; // Attempt to modify the value
    cout << "Inside modifyValue: " << original << endl;

}

int main()
 {
    int original = 10;
    cout << "Before modifyValue: " << original << endl;
    modifyValue(original);
    cout << "After modifyValue: " << original << endl;


}
