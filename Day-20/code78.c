//code78
#include <stdio.h>
int main() {
    int n, i, j;
    int flag = 1; 
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int A[n][n];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
    scanf("%d", &A[i][j]);
        }
    }
    // Checking symmetry: A[i][j] == A[j][i]
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
        if (A[i][j] != A[j][i]) {
         flag = 0;
        break;
            }
        }
        if (flag == 0) break;
    }
    if (flag == 1)
    printf("The matrix is symmetric.\n");
    else
    printf("The matrix is not symmetric.\n");
    return 0;
}
