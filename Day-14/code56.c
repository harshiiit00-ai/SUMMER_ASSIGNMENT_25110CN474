//code56   Duplicate in Array
#include <stdio.h>
int main() {
int arr[100],n;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for(int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("Duplicate elements in the array are:\n");
int found = 0;
for(int i = 0; i < n; i++) {
for(int j = i + 1; j < n; j++) {
if(arr[i] == arr[j]) {
printf("%d\n", arr[i]);
found = 1;
break;                                    // avoiding printing the same duplicate multiple times
}
}
}
if(!found)
printf("No duplicates found.\n");
return 0;
}
