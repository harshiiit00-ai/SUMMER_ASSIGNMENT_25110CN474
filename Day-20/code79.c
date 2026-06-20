//code79
#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int A[m][n];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
    scanf("%d", &A[i][j]);
    }
    }
    printf("Row-wise sums:\n");
    for (i = 0; i < m; i++) {
    int sum = 0;
    for (j = 0; j < n; j++) {
    sum += A[i][j];
        }
    printf("Sum of row %d = %d\n", i + 1, sum);
    }
    return 0;
}
