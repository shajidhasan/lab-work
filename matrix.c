#include <stdio.h>

void printMatrix(int m, int n, int (*matrix)[n]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int matB[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};

    matA[2][1];

    int matSub[3][3];

    int i, j, x;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matSub[i][j] = matB[i][j] - matA[i][j];
        }
    }

    printf("Matrix A =\n");
    printMatrix(3, 3, matA);

    printf("\nMatrix B =\n");
    printMatrix(3, 3, matB);

    printf("\nMatrix B - Matrix A =\n");
    printMatrix(3, 3, matSub);

    return 0;
}
