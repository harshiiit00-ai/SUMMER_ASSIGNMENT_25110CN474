//cpde64
#include <stdio.h>
int removeDuplicates(int arr[], int n) {
int i, j, k;
for (i = 0; i < n; i++) {
for (j = i + 1; j < n;) {
if (arr[i] == arr[j]) {
 // Shift elements left to overwrite duplicate
for (k = j; k < n - 1; k++) {
arr[k] = arr[k + 1];
}
n--; // reduce size
} else {
j++;
}
}
}
return n; // new size after removing duplicates
}
int main() {
int n, i;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
n = removeDuplicates(arr, n);
printf("Array after removing duplicates:\n");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
    return 0;
}
