/*=================================================================================
/* TSICPP05-2: Teresol
/* Name : Ibrar Younis
/* Task No.: 1-1.
/*===================================================================================
/*Implement the myAtoi(string s) function, which converts a string to a 32-bit signed
integer.
/*===================================================================================*/
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int romanToInt(const string& s) {
    // Map Roman numerals to their integer values
    unordered_map<char, int> romanMap = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0;
    int n = s.length();

    // Iterate through the string
    for (int i = 0; i < n; ++i) {
        // Current value
        int current = romanMap[s[i]];

        // Next value (if exists)
        int next = (i + 1 < n) ? romanMap[s[i + 1]] : 0;

        // If the current value is less than the next value, subtract it
        if (current < next) {
            result -= current;
        } else {
            // Otherwise, add the current value
            result += current;
        }
    }

    return result;
}

int main() {
    string s;
    cout << "Enter a Roman numeral: ";
    cin >> s;

    // Convert Roman numeral to integer and print the result
    int result = romanToInt(s);
    cout << "The integer value is: " << result << endl;

    return 0;
}
