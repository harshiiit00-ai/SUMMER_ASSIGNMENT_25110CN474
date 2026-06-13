//code51 Smallest and Largest using array
#include <stdio.h>
int findLargest(int arr[], int n) {
int max = arr[0];
for(int i=1; i<n; i++) {
if(arr[i] > max) {
max = arr[i];
}
}
return max;
}
int findSmallest(int arr[], int n) {
int min=arr[0];
for(int i=1; i<n; i++) {
if(arr[i] < min) {
min = arr[i];
}
}
return min;
}
int main() {
int n;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for(int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
int largest = findLargest(arr, n);
int smallest = findSmallest(arr, n);
printf("Largest element = %d\n", largest);
printf("Smallest element = %d\n", smallest);
return 0;
}
