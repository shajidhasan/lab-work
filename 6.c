#include <stdio.h>

int main() {
    int matA[2][2], matB[2][2], matMul[2][2], i, j;

    printf("Enter matrix A\n-----------------\n");

    for (i = 0; i < 2; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < 2; j++) {
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Enter matrix B\n-----------------\n");

    for (i = 0; i < 2; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < 2; j++) {
            scanf("%d", &matB[i][j]);
        }
    }
    int x, y;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            int dot = 0;
            for (x = 0; x < 2; x++) {
                dot += matB[x][j] * matA[i][x];
            }
            matMul[i][j] = dot;
        }
    }

    printf("Multiplication result: \n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", matMul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
