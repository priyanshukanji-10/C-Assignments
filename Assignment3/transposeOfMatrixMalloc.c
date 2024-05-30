#include <stdio.h>
#include <stdlib.h>

void scanArray(int **p, int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
}
void transpose(int **p, int rows, int cols)
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

int main()
{
    int rows, cols;
    printf("Enter the array:\n");
    printf("Enter no of rows:");
    scanf("%d", &rows);
    printf("Enter no of cols:");
    scanf("%d", &cols);

    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Return with failure status
    }

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL)
        {
            printf("Memory allocation failed!\n");
            return 1; // Return with failure status
        }
    }

    printf("Enter elements for the matrix: \n");
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
    // Free allocated memory
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
