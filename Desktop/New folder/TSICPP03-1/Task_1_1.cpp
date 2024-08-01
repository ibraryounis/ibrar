/*=================================================================
/* TSICPP03-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 1_1.
/*===================================================================================
/*  calculate the area of a circle using a macro like function.
/*===================================================================================*/
#include <iostream>
using namespace std;
#define PI 3.14159265358979323846
float calculate_area(float radius)
 {
    return PI * radius * radius;
}

int main() {
    float radius, area;
    // Ask the user to input the radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    // Calculate the area using the function
    area = calculate_area(radius);

    // Print the result
    cout << "\nArea of the circle = " << area << endl;

    return 0;
}
