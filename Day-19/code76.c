//code76
#include <stdio.h>
int main() {
    int n, i, j;
    int primarySum = 0, secondarySum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int A[n][n];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
        scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        primarySum += A[i][i];                                     // Primary diagonal (top-left to bottom-right)
        secondarySum += A[i][n - i - 1];                           // Secondary diagonal (top-right to bottom-left)
    }
    printf("Sum of primary diagonal = %d\n", primarySum);
    printf("Sum of secondary diagonal = %d\n", secondarySum);
    return 0;
}
