//code67
#include <stdio.h>
int exists(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return 1;
    }
    return 0;
}
int intersectionArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int k = 0;
    for (int i = 0; i < n1; i++) {
        if (exists(arr2, n2, arr1[i]) && !exists(result, k, arr1[i])) {
            result[k++] = arr1[i];
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
    int result[n1 < n2 ? n1 : n2];
    int size = intersectionArrays(arr1, n1, arr2, n2, result);
    printf("Intersection of arrays:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
