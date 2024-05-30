#include <stdio.h>

int main()
{
    int n = 3, m = 2, p = 4; // size of matrices A, B, and C

    // Initialize matrix A
    int A[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    // Initialize matrix B
    int B[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}};

    // Initialize matrix C to store the result
    int C[3][4];

    // Perform matrix multiplication
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            int sum = 0;
            for (k = 0; k < m; k++)
            {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    // Print the result matrix C
    printf("Matrix C:\n");
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
