//code75
#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int A[m][n], T[n][m];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
        scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
        T[j][i] = A[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
        printf("%d ", T[i][j]);
        }
        printf("\n");
    }
    return 0;
}
