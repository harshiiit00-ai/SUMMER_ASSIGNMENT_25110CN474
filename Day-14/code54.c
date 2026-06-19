//code54 Frequency of an element
#include <stdio.h>
int main() {
int arr[100], n, key, count = 0;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for(int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("Enter the element to find its frequency: ");
scanf("%d", &key);
for(int i = 0; i < n; i++) {
if(arr[i] == key) {
count++;
}
}
if(count > 0)
printf("Frequency of %d = %d\n", key, count);
else
printf("Element %d not found in the array.\n", key);
return 0;
}
