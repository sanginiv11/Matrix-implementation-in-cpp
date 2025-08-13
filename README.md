# Matrix-implementation-in-cpp
# AIM : MULTIDIMENSIONAL ARRAY 


# THEORY :
**1. Take Matrix Input from User & Display It**
- A matrix is a 2D array arranged in rows and columns.
- To take input, loop through each row and column using nested loops.
- Store each entered value into the 2D array at the correct index.
- To display it, again loop over rows and columns, printing each element with formatting.
- This operation does not modify the data; it only shows the stored matrix.

# 2. Addition of Two Matrices
- Matrix addition can only be performed if two matrices have the same dimensions.
- Each element in the result is the sum of corresponding elements from both matrices.
- Requires nested loops to iterate over every position $$i][j].
- Result is a new matrix containing the computed sums.
- Commonly used in image processing and mathematical computations.

# 3. Multiplication of Two Matrices
- Possible only if columns of first matrix = rows of second matrix.
- Each result element is the dot product of a row from the first matrix and a column from the second.
- Implemented using three nested loops (for rows, columns, and dot product calculation).
- Resultant matrix dimensions are (rows of first) × (columns of second).
- Heavily used in computer graphics, transformations, and scientific computing.

4. Diagonal Addition of a Square Matrix
- Works only on square matrices (same number of rows and columns).
- The main diagonal runs from the top-left to bottom-right.
- The secondary diagonal runs from top-right to bottom-left.
- The sum of diagonals is calculated separately and then added together.
- If the matrix size is odd, the center element is counted twice, so subtract it once.

# 5. Transpose of a Matrix
- The transpose of a matrix is formed by interchanging rows and columns.
- If the original matrix is m × n, its transpose is n × m.
- Implemented by swapping the index position: new[j][i]=old[i][j]
- Transpose is used in matrix symmetry checks and mathematical operations.
- Requires only read and print operations; no new values are calculated.

# 6. Compare Elements of First Row to Second Row
- Requires a matrix with at least two rows.
- Each element of the first row is compared with the corresponding element of the second row (same column).
- The comparison results can be: first greater, second greater, or equal.
- Useful for ranking, sorting logic, or data analysis.
- Implemented using a single loop across the number of columns.

# ALGORITHM:

# (01). TAKE MATRIX INPUT FROM USER AND DISPLAY IT
1. Start.
2. Ask the user to enter the number of rows.
3. Ask the user to enter the number of columns.
4. Declare a 2D array of size '[rows][cols]'.
5. Display a message to enter elements row-wise.
6. For each row 'i' from '0' to 'rows - 1':  
   a. For each column 'j' from '0' to 'cols - 1':  
      i. Read the element into 'matrix[i][j]'.
7. Display the message "The matrix is:".
8. For each row 'i' from '0' to 'rows - 1':  
   a. For each column 'j' from '0' to 'cols - 1':  
      i. Print the element 'matrix[i][j]' with space.  
   b. Move to next line.
9. End.

# (02). ADDITION OF MATRIX
1. Start.
2. Ask the user to enter number of rows.
3. Ask the user to enter number of columns.
4. Declare 3 matrices : 'matrix1', 'matrix2', and 'sum'.
5. Ask the user to enter elements of the first matrix.  
   - Loop through rows 'i' and for each 'j', store elements in 'matrix1[i][j]'.
6. Ask the user to enter elements of the second matrix.  
   - Loop through rows 'i' and for each 'j', store elements in 'matrix2[i][j]'.
7. For each row 'i' and column 'j':  
   - Calculate 'sum[i][j] = matrix1[i][j] + matrix2[i][j]'.
8. Display "Sum of the matrices:".
9. Print 'sum' matrix in row-column format.
10. End.

# (03).MULTIPLYING TWO MATRICES.

1. Start.
2. Ask the user to enter rows and columns of the first matrix 'r1', 'c1'.
3. Ask the user to enter rows and columns of the second matrix 'r2', 'c2'.
4. If 'c1 != r2', print error and stop (matrix multiplication not possible).
5. Declare matrices: 'A[r1][c1]', 'B[r2][c2]', and 'result[r1][c2]' initialized to '0'.
6. Read elements for matrix A.
7. Read elements for matrix B.
8. For each row 'i' from '0' to 'r1-1':
   - For each column 'j' from '0' to 'c2-1':
     - Set 'result[i][j] = 0'.
     - For each 'k' from '0' to 'c1-1':
     - 'result[i][j] += A[i][k] * B[k][j]'.
9. Display "Resultant Matrix:".
10. Print matrix 'result' in row-column form.
11. End.

# (04). DIAGONAL ADDITION

1. Start.
2. Ask the user to enter the size n of the square matrix.
3. Print "Matrix is n x n".
4. Declare matrix and two variables a = 0 (main diagonal sum), b = 0 (secondary diagonal sum).
5. Read all n × n matrix elements.
6. Display the matrix.
7. For each index 'i' from '0' to 'n-1':
   - Add 'matrix[i][i]' to 'a' (main diagonal).
   - Add 'matrix[i][n - i - 1]' to 'b' (secondary diagonal).
8. Print "Main Diagonal Sum" and "Secondary Diagonal Sum".
9. Compute total diagonal sum ds = a + b.
10. If n is odd:
    - Subtract the center element once (it was counted twice).
11. Display the adjusted diagonal sum.
12. End.

# (05). TRANSPOSE OF A MATRIX
1. Start.
2. Ask the user to enter number of rows.
3. Ask the user to enter number of columns.
4. Declare matrix '[rows][cols]'.
5. Read all elements of the matrix.
6. Display "Transpose of the matrix is:".
7. For each 'j' from '0' to 'cols-1':
   - For each 'i' from '0' to 'rows-1':
     - Print 'matrix[i][j]' (interchanging rows and columns).
   - Move to next line after each row of transpose.
8. End.

# (06). COMPARE TWO ROWS COLUMN-WISE 
1. Start.
2. Ask the user to enter number of rows.
3. Ask the user to enter number of columns.
4. If rows  mat[j], print "First row is greater".[1]
   - Else if mat[j] < mat[j], print "Second row is greater".[1]
   - Else print "Both are equal".
9. End.

# CONCLUSION:
This experiment demonstrated the use of multidimensional arrays in C++ to store and process data in matrix form. Various operations like input/output, addition, multiplication, diagonal sum, transpose, and row comparison were implemented, showing how nested loops and indexing can be used to efficiently manipulate two-dimensional data structures.
