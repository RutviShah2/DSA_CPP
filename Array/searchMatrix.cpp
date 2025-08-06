#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    int i = 0, j = cols - 1; 

    while (i < rows && j >= 0) {
        if (matrix[i][j] == target) {
            return true;
        } else if (matrix[i][j] > target) {
            j--; 
        } else {
            i++;
        }
    }
    return false;
}

int main() {
    int rows, cols, target;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter elements row-wise (sorted in rows and columns):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the target number to search: ";
    cin >> target;

    if (searchMatrix(matrix, target)) {
        cout << "Target " << target << " found in matrix!" << endl;
    } else {
        cout << "Target " << target << " NOT found in matrix!" << endl;
    }

    return 0;
}
