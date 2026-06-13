//code43 Prime by function
#include <stdio.h>
int isPrime(int num) {
    int i;
    if (num <= 1)
     return 0;                                                // Not prime
    for (i = 2; i <= num / 2; i++) {
     if (num % i == 0)
       return 0;                                             // Divisible, not prime
    }
    return 1;                 }                             // Prime
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n))
    printf("%d is a prime number.\n", n);
    else
     printf("%d is not a prime number.\n", n);
    return 0;
}
