#include <iostream>
using namespace std;
int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    cout << "Enter the elements row-wise:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "The matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/* OUTPUT 
Enter number of rows: 3
Enter number of columns: 3
Enter the elements row-wise:
1 2 3
4 5 6 
7 8 9
The matrix is:
1 2 3 
4 5 6 
7 8 9 
*/