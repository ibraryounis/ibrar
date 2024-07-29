/*=================================================================
/* TSICPP02-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 1_a.
/*===================================================================================
/*   Define a struct for a student with fields for name, age, and grade.
/*===================================================================================*/
#include <iostream>
#include <cstring> // For strcpy
using namespace std;
struct Student {
    char name[50];
    int age;
    char grade;
};
struct IntStruct {
    int a;
    int b;
    int c;
};
struct IntCharStruct {
    int a;
    int b;
    int c;
    char d;
};

struct FloatIntCharStruct {
    float a;
    int b;
    int c;
    char d;
};

int main() {
   
    Student student;

    cout << "Enter student's name: ";
    cin>> student.name; 

    cout << "Enter student's age: ";
    cin >> student.age;

    cout << "Enter student's grade: ";
    cin >> student.grade;

    // Display student's information
    cout << "\nStudent Information:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Grade: " << student.grade << endl;

    // Calculate and display the size of IntStruct
    cout << "\nSize of IntStruct (int a, int b, int c): " << sizeof(IntStruct) << " bytes" << endl;

    // Calculate and display the size of IntCharStruct
    cout << "Size of IntCharStruct (int a, int b, int c, char d): " << sizeof(IntCharStruct) << " bytes" << endl;

    // Calculate and display the size of FloatIntCharStruct
    cout << "Size of FloatIntCharStruct (float a, int b, int c, char d): " << sizeof(FloatIntCharStruct) << " bytes" << endl;

    return 0;
}
