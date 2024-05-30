#include <stdio.h>

void transpose(int p[][3], int rows, int cols)
{
    // Swap elements across the main diagonal
    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < cols; j++)
        {
            int temp = p[i][j];
            p[i][j] = p[j][i];
            p[j][i] = temp;
        }
    }
}

void scanArray(int p[][3], int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
}

int main()
{
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter elements for the matrix:\n");
    scanArray(matrix, rows, cols);

    printf("Matrix entered by the user:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Transpose the matrix
    transpose(matrix, rows, cols);

    printf("Transposed matrix:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
