#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    cout << "Enter elements of the matrix:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Transpose of the matrix is:" << endl;
    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/* OUTPUT
Enter number of rows: 3
Enter number of columns: 3
Enter elements of the matrix:
11 4 14
9 5 8
24 6 19
Transpose of the matrix is:
11 9 24 
4 5 6 
14 8 19 
*/