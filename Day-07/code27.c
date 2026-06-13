//code27 Recursive function to find sum of digits
#include <stdio.h>
int sum(int n) {
    if (n == 0) {
        return 0;   
    }
    return (n % 10) + sum(n / 10);  //executing recursive step
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;                     // this code handles negative numbers
    }
    printf("Sum of digits = %d\n", sum(num));
    return 0;
}
