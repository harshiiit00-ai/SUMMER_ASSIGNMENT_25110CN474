//code28 recusive function for reversing
#include <stdio.h>
int rev(int n, int rev) {
    if (n == 0) {
        return rev;   
    }
    return reversenum(n / 10, rev * 10 + (n % 10));  //executing recursive step
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = rev(num, 0);
    printf("Reversed number = %d\n", reversed);
    return 0;
}
