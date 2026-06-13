//code52 count even & odd using Array
#include <stdio.h>
int countEven(int arr[], int n) {
int count = 0;
for(int i = 0; i < n; i++) {
if(arr[i] % 2 == 0) {
count++;
}
}
return count;
}
int countOdd(int arr[], int n) {
int count = 0;
for(int i = 0; i < n; i++) {
if(arr[i] % 2 != 0) {
count++;
}
}
return count;
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
int evenCount = countEven(arr, n);
int oddCount = countOdd(arr, n);
printf("Number of even elements= %d\n", evenCount);
printf("Number of odd elements= %d\n", oddCount);
return 0;
}
