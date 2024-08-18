/*=================================================================================
/* TSICPP05-2: Teresol
/* Name : Ibrar Younis
/* Task No.: 1-0.
/*===================================================================================
/*Implement the myAtoi(string s) function, which converts a string to a 32-bit signed
integer.
/*===================================================================================*/
#include <iostream>
#include <string>
#include <climits> // for INT_MAX and INT_MIN

using namespace std;

int myAtoi(string s) {
    int n = s.length(); // Get the length of the string
    int i = 0; // Initialize index for iteration

    // Step 1: Ignore leading whitespace
    while (i < n && s[i] == ' ') {
        i++; // Move index to the next character
    }
    cout << "After Whitespace removal: \"" << s.substr(i) << "\"" << endl;

    // If the string is empty or only has spaces
    if (i == n) {
        cout << "Result after conversion: 0" << endl;
        return 0; // No digits found, return 0
    }

    // Step 2: Determine the sign
    int sign = 1; // Default to positive
    if (s[i] == '-') {
        sign = -1; // Set sign to negative
        i++; // Move index to the next character
    } else if (s[i] == '+') {
        i++; // Move index to the next character
    }
    cout << "Sign determined: " << (sign == 1 ? "Positive" : "Negative") << endl;

    // Step 3: Convert digits to integer, skipping leading zeros
    long long result = 0; // Use long long to handle large values
    bool digitsFound = false; // Flag to check if any digits are found
    while (i < n && isdigit(s[i])) {
        digitsFound = true; // Set flag to true when digits are found
        result = result * 10 + (s[i] - '0'); // Convert character to digit and accumulate
        i++; // Move index to the next character
    }
    if (!digitsFound) {
        cout << "Result after conversion: 0" << endl;
        return 0; // No digits were found, return 0
    }
    cout << "Conversion result: " << result * sign << endl;

    // Step 4: Handle overflow/underflow by rounding
    if (result * sign > INT_MAX) {
        cout << "Rounding applied: INT_MAX (" << INT_MAX << ")" << endl;
        return INT_MAX; // Return maximum integer value if overflow
    }
    if (result * sign < INT_MIN) {
        cout << "Rounding applied: INT_MIN (" << INT_MIN << ")" << endl;
        return INT_MIN; // Return minimum integer value if underflow
    }

    // Apply the sign and return the result
    int finalResult = static_cast<int>(result * sign); // Convert long long to int
    cout << "Final result after rounding (if any): " << finalResult << endl;
    return finalResult;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin>>str; // Read a line of input from the user

    cout << "String entered by user: \"" << str << "\"" << endl;
    myAtoi(str); // Call the myAtoi function to convert the string

    return 0;
}
