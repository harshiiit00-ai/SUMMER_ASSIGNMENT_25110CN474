//code65
#include <stdio.h>
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
int i, j;
for (i = 0; i < n1; i++) {
merged[i] = arr1[i];
}

for (j = 0; j < n2; j++) {
merged[n1 + j] = arr2[j];
}
}
int main(){
int n1,n2,i;
printf("Enter size of first array: ");
scanf("%d", &n1);
int arr1[n1];
printf("Enter %d elements for first array:\n", n1);
for (i = 0; i < n1; i++) {
scanf("%d", &arr1[i]);
}
printf("Enter size of second array: ");
scanf("%d", &n2);
int arr2[n2];
printf("Enter %d elements for second array:\n", n2);
for (i = 0; i < n2; i++) {
scanf("%d", &arr2[i]);
}
int merged[n1 + n2];
mergeArrays(arr1, n1, arr2, n2, merged);
printf("Merged array:\n");
for (i = 0; i < n1 + n2; i++) {
printf("%d ", merged[i]);
}
return 0;
}
