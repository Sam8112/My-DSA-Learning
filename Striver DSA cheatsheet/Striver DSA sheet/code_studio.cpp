#include <iostream>
#include <vector>
using namespace std;

void printPattern(int n) {
    vector<vector<int>> matrix(n, vector<int>(2 * n, 0));
    int current_num = 1;

    for (int i = 0; i < n; ++i) {
        // Print the first n numbers and last n numbers in the row
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = current_num++;
            matrix[i][2 * n - j - 1] = current_num++;
        }
    }

    // Print the remaining rows
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < 2 * (n - i); ++j) {
            // Find the position of the next number
            int row = i;
            int col = n + (n - i) - 1;
            while (j--) {
                if (col < n - 1)
                    ++col;
                else
                    ++row;
            }
            matrix[i][j] = current_num++;
        }
    }

    // Print the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2 * n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 1) {
        cout << "Invalid input. n should be a positive integer." << endl;
        return 1;
    }

    printPattern(n);

    return 0;
}
