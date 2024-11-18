/*Jessica, a teacher, uses a grid to record student performance scores in various subjects. To get an overview, she needs to replace each score in a row with the product of scores in that row. Develop a program for her to update the grid so each element is the product of its row, with scores ranging from 1 to 9.

Input format :
The first line of input consists of an integer T, representing the number of test cases.

For each test case:

The first line contains two integers R and C, representing the number of rows and columns.
The next R lines each contain C space-separated integers, where each integer is between 1 and 9, representing the scores in the grid.
Output format :
For each test case, print the updated matrix where each element in a row is replaced by the product of all elements in that row.*/

#include <stdio.h>

void replaceWithRowProduct(int matrix[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int product = 1; // Initialize product to 1
        for (int j = 0; j < cols; j++) {
            product *= matrix[i][j]; 
        }
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = product;
        }
    }
}

void printMatrix(int matrix[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int R, C;
        scanf("%d %d", &R, &C);
        int matrix[100][100];
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
        replaceWithRowProduct(matrix, R, C);
        printMatrix(matrix, R, C);
    }

    return 0;
}
