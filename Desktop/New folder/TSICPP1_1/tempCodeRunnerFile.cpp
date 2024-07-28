/*=================================================================
/* TSICPP01-2: Teresol
/* Name : Ibrar Younis
/* Task No.: 2.3.
/*===================================================================================
/*   Given a square matrix, the task is to rotate its elements clockwise by one step.
/*===================================================================================*/
#include <iostream>
#include <vector>
using namespace std;

void rotateMatrixClockwiseOneStep(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if (n == 0 || matrix[0].size() != n) return; // Ensure it's a square matrix

    int prev, curr;
    for (int i = 0; i < n / 2; i++) {
        int first = i;
        int last = n - i - 1;

        // Move the elements of the current layer
        prev = matrix[first + 1][first];
        for (int j = first; j <= last; j++) {
            curr = matrix[first][j];
            matrix[first][j] = prev;
            prev = curr;
        }

        for (int j = first + 1; j <= last; j++) {
            curr = matrix[j][last];
            matrix[j][last] = prev;
            prev = curr;
        }

        for (int j = last - 1; j >= first; j--) {
            curr = matrix[last][j];
            matrix[last][j] = prev;
            prev = curr;
        }

        for (int j = last - 1; j > first; j--) {
            curr = matrix[j][first];
            matrix[j][first] = prev;
            prev = curr;
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    rotateMatrixClockwiseOneStep(matrix);

    cout << "Rotated Matrix:" << endl;
    printMatrix(matrix);

    return 0;
}
