/*=================================================================
/* TSICPP02-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 2_b.
/*===================================================================================
/* program that takes a character input ('a'-'c') and handles them using switch
   statements.
/*===================================================================================*/
#include <iostream>
using namespace std;

int main() {
    char abc;
    cout << "Enter the input option:" << endl;
    cin >> abc;

    switch(abc) {
        case 'a':
            cout << "You selected character a." << endl;
            break;
        case 'b':
            cout << "You selected character b." << endl;
            break;
        case 'c':
            cout << "You selected character c." << endl;
            break;
        default:
            cout << "You selected an invalid option." << endl;
            break;
    }

    return 0;
}
