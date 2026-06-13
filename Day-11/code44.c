//code44 function for factorial
#include <stdio.h>
int factorial(int n){
    if (n == 0 || n == 1)
    return 1;                                            // Base case
    else
    return n * factorial(n - 1);                         // Recursive call
}
int main() {
    int num,result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = factorial(num);
    printf("Factorial of %d = %d\n",num,result);
    return 0;
}
