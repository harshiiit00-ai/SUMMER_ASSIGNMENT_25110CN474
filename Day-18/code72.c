//code72
#include <stdio.h>
void sortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
    if (arr[i] < arr[j]) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {12, 45, 23, 51, 19, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("Original array:\n");
    for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
    printf("\n");
    sortDescending(arr, n);
    printf("Array sorted in descending order:\n");
    for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
