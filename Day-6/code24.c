//code24 power
#include <stdio.h>
long long power(int x, int n) {
    long long result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}
int main() {
    int x, n;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);
    long long ans = power(x, n);
    printf("%d^%d = %lld\n", x, n, ans);
    return 0;
}
