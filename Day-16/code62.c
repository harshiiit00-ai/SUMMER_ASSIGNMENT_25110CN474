//code62 Find max frequency elemet
#include <stdio.h>
int findMaxFrequencyElement(int arr[], int n) {
int maxCount = 0, element = arr[0];
for (int i = 0; i < n; i++) {
int count = 1;
for (int j = i + 1; j < n; j++) {
if (arr[i] == arr[j]) {
count++;
}
}
if (count > maxCount) {
maxCount = count;
element = arr[i];
}
}
return element;
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
int result = findMaxFrequencyElement(arr, n);
printf("Element with maximum frequency: %d\n", result);
return 0;
}
