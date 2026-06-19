//code 55  Second largest element
#include <stdio.h>
int main() {
int arr[100], n;
int first, second;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
if(n < 2) {
printf("Array must have at least two elements.\n");
return 0;
}
printf("Enter %d elements:\n", n);
for(int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
first = second = -2147483648;                            //Assuming Smallest possible integer
for(int i = 0; i < n; i++) {
if(arr[i] > first) {
second = first;
first = arr[i];
} else if(arr[i] > second && arr[i] != first) {
second = arr[i];
}
}
if(second == -2147483648)
printf("There is no second largest element (all elements are equal).\n");
else
printf("The second largest element is %d\n", second);
return 0;
}
