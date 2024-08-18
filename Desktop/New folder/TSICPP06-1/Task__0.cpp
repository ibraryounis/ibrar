/*=================================================================================
/* TSICPP06-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 1-0.
/*===================================================================================
/*Write a class having two private variables and one member function which will
return the area of the rectangle.
/*===================================================================================*/
#include <iostream>

using namespace std;

class Rectangle {
private:
    // Private variables to store the dimensions of the rectangle
    float length;
    float width;

public:
    // Constructor to initialize the rectangle's dimensions
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Member function to calculate and return the area of the rectangle
    float area() {
        return length * width;
    }
};

int main() {
    float length, width;

    // Get length and width from the user
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Create a Rectangle object with the user-provided dimensions
    Rectangle rect(length, width);

    // Get the area of the rectangle
    float area = rect.area();

    // Output the area
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
