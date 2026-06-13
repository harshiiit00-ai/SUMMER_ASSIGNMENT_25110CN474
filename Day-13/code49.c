//code49 Array
#include <stdio.h>
void inputArray(int arr[],int n){
printf("Enter %d elements:\n", n);
for(int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
}
void displayArray(int arr[], int n) {
printf("Array elements are:\n");
for(int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");                                      //using fnc
}
int main() {
int n;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];                                        // declaring array of size n
inputArray(arr, n);                                // call function to input elements
displayArray(arr, n);                              // call function to display elements
return 0;
}
