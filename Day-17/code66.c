//code66
#include <stdio.h>
int exists(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return 1;
    }
    return 0;
}
int unionArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int k = 0;
    for (int i = 0; i < n1; i++) {
        if (!exists(result, k, arr1[i])) {
            result[k++] = arr1[i];
        }
    }
    for (int i = 0; i < n2; i++) {
        if (!exists(result, k, arr2[i])) {
            result[k++] = arr2[i];
        }
    }
    return k;
}
int main() {
    int n1, n2, i;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int result[n1 + n2];
    int size = unionArrays(arr1, n1, arr2, n2, result);
    printf("Union of arrays:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
