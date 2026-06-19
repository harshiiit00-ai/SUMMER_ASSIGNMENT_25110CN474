//code59 Rotate Right
#include <stdio.h>
void rotateRight(int arr[], int n) {
int last = arr[n - 1];  // store the last element
for (int i = n - 1; i > 0; i--) {
arr[i] = arr[i - 1];  // shift elements right
}
arr[0] = last;  // put last element at the front
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
rotateRight(arr, n);
printf("Array after right rotation:\n");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}
