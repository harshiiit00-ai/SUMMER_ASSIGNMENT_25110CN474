//code61 Find missing number
#include <stdio.h>
int findMissingNumber(int arr[], int n) {
int total = (n + 1) * (n + 2) / 2; // sum of 1 to (n+1)
int sum = 0;
for (int i = 0; i < n; i++) {
sum += arr[i];
}
    return total - sum; 
}
int main() {
int n, i;
printf("Enter size of array (n): ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements (from 1 to n+1 with one missing):\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
int missing = findMissingNumber(arr, n);
printf("Missing number is: %d\n", missing);
 return 0;
}
