#include <stdio.h>

int main(void) {
    int r1, c1, r2, c2;
    printf("Enter rows and cols of Matrix A: ");
    if (scanf("%d %d", &r1, &c1) != 2 || r1 <= 0 || c1 <= 0 || r1 > 10 || c1 > 10) { printf("Invalid size\n"); return 1; }
    printf("Enter rows and cols of Matrix B: ");
    if (scanf("%d %d", &r2, &c2) != 2 || r2 <= 0 || c2 <= 0 || r2 > 10 || c2 > 10) { printf("Invalid size\n"); return 1; }
    if (c1 != r2) { printf("Matrix multiplication not possible (c1 != r2)\n"); return 1; }

    int A[10][10], B[10][10], C[10][10];

    printf("Enter elements of A (%d x %d):\n", r1, c1);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of B (%d x %d):\n", r2, c2);
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    // Multiply
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) C[i][j] += A[i][k] * B[k][j];
        }
    }

    // Print result
    printf("Result C (%d x %d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
