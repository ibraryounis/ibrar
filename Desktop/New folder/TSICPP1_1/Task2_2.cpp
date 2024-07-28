/*=================================================================
/* TSICPP01-2: Teresol
/* Name : Ibrar Younis
/* Task No.: 2.2.
/*===================================================================================
/*   program to m x n matrix, return all elements of the matrix in spiral order.
/*===================================================================================*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int> >& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right along the top row
        for (int i = left; i <= right; i++) {
            result.push_back(matrix[top][i]);
        }
        top++;

        // Traverse from top to bottom along the right column
        for (int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][right]);
        }
        right--;

        // Traverse from right to left along the bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        // Traverse from bottom to top along the left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return result;
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int> > matrix(rows, vector<int>(cols));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> result = spiralOrder(matrix);

    cout << "Matrix in spiral order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
