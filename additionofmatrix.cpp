#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int matrix1[100][100], matrix2[100][100], sum[100][100];
    cout << "\nEnter elements of first matrix:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    cout << "\nEnter elements of second matrix:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
    cout << "\nSum of the matrices:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << sum[i][j] << " ";
        cout << endl;
    }
    return 0;
}
/* OUTPUT
Enter number of rows: 2 
Enter number of columns: 3
Enter elements of first matrix:
1 2 3
1 4 6
Enter elements of second matrix:
8 9 6
6 5 8
Sum of matrices is:
9 11 9 
7 9 14 */ 