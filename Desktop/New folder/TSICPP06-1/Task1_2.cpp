/*=================================================================================
/* TSICPP06-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 1-2.
/*===================================================================================
/*Write a c++ class called 'student' with
Data members:
name(char type),
marks1,marks2 (integer type)
The program asks the user to enter name and marks. Then calc_avg() calculates the
average marks and disp() display name and total media mark on screen in different lines.
/*===================================================================================*/
#include <iostream>

using namespace std;

class Student {
private:
    char name[50];
    int marks1;
    int marks2;

public:
    // Member function to input name and marks
    void input() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
    }

    // Member function to calculate the average marks
    float calc_avg() {
        return (marks1 + marks2) / 2.0;
    }

    // Member function to display the name and average marks
    void disp() {
        cout << "Student Name: " << name << endl;
        cout << "Average Marks: " << calc_avg() << endl;
    }
};

int main() {
    // Create an object of Student class
    Student student;

    // Input student details
    student.input();

    // Display student details and average marks
    student.disp();

    return 0;
}
