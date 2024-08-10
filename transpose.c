#include <stdio.h>

int main() {
    int m, n, i, j;

    // Requesting the dimensions of the matrix from the user
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d", &m, &n);

    int A[m][n], Transposed[n][m];

    // Capturing the matrix elements from the user
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    // Calculating the transpose
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            Transposed[j][i] = A[i][j];
        }
    }

    // Displaying the transpose
    printf("\nTranspose of the matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d  ", Transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
