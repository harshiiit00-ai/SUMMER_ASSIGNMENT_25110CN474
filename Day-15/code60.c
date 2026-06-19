//code60 move zero to end
#include <stdio.h>
void moveZeroesToEnd(int arr[], int n) {
int count = 0;
for (int i = 0; i < n; i++) {
if (arr[i] != 0) {
arr[count++] = arr[i]; 
}
}
while (count < n) {
arr[count++] = 0;
}
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
moveZeroesToEnd(arr, n);
printf("Array after moving zeroes to end:\n");
for (i = 0; i < n; i++) {
 printf("%d ", arr[i]);
}
    return 0;
}
