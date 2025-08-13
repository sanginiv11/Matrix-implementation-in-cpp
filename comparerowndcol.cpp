#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    if (rows < 2) {
        cout << "Matrix must have at least 2 rows for comparison.\n";
        return 0;
    }

    int mat[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "\nComparison of first row with second row:\n";
    for (int j = 0; j < cols; j++) {
        if (mat[0][j] > mat[1][j])
            cout << "Element in column " << j+1 << ": First row is greater\n";
        else if (mat[0][j] < mat[1][j])
            cout << "Element in column " << j+1 << ": Second row is greater\n";
        else
            cout << "Element in column " << j+1 << ": Both are equal\n";
    }

    return 0;
}
/* OUTPUT
Enter number of rows: 2
Enter number of columns: 2
Enter matrix elements:
4 2
1 3

Comparison of first row with second row:
Element in column 1: First row is greater
Element in column 2: Second row is greater
*/