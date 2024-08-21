#include <stdio.h>

void matRotation(int nrows, int ncolumns, int (*matrix)[ncolumns]);
void inputMatrix(int nrows, int ncolumns, int (*matrix)[ncolumns]);
int main()
{
    int ncolumns, nrows ;
    printf("Enter the number of rows: ");
    scanf("%d", &nrows);
    printf("Enter the number of columns: ");
    scanf("%d", &ncolumns);
    int matrix[nrows][ncolumns];
    inputMatrix(nrows, ncolumns, matrix);
    matRotation(nrows, ncolumns, matrix);

    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncolumns; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }


}

void matRotation(int nrows, int ncolumns, int (*matrix)[ncolumns])
{
    int temp;
    
    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncolumns/2; j++)
        {
            
            temp = matrix[i][j];
            matrix[i][j] = matrix[i][(ncolumns - 1) - j];
            matrix[i][(ncolumns - 1) - j] = temp;
            
        }

    }
    for (int i = 0; i < ncolumns; i++)
    {
        for (int j = 0; j < nrows/2; j++)
        {
            temp = matrix[j][i];
            matrix[j][i] = matrix[(nrows - 1) - j][i];
            matrix[(nrows - 1) - j][i] = temp;
        }

    }

    
}

void inputMatrix(int nrows, int ncolumns, int (*matrix)[ncolumns])
{
    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncolumns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

}