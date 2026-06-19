//code63
#include <stdio.h>
void findPairWithSum(int arr[], int n, int target) {
int found = 0;
for (int i = 0; i < n; i++) {
for (int j = i + 1; j < n; j++) {
if (arr[i] + arr[j] == target) {
 printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
 found = 1;
}
}
}
if (!found) {
printf("No pair with given sum found.\n");
}
}
int main() {
int n, target, i;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
 }
printf("Enter target sum: ");
scanf("%d", &target);
findPairWithSum(arr, n, target);
return 0;
}
