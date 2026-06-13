//code50 Sum and Average using Array
#include <stdio.h>
int sumArray(int arr[], int n) {
int sum = 0;
for(int i = 0; i < n; i++) {
sum += arr[i];
}                                                            //for sum
return sum;
}
float averageArray(int arr[], int n) {
int sum = sumArray(arr, n); 
return (float)sum / n;                                      //for average
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
int sum = sumArray(arr, n);
float avg = averageArray(arr, n);
printf("Sum of array elements = %d\n", sum);
printf("Average of array elements = %.2f\n", avg);
return 0;
}
