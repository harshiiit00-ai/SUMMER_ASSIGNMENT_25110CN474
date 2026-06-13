//code26 recussive function to calculate fibonacci
#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) 
        return 0;   
    else if (n == 1) 
        return 1;   
    else 
        return fibonacci(n - 1) + fibonacci(n - 2);  
}                                                       //defined recussive step
int main() {
    int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series up to %d terms:\n", terms);
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }                                                   //using loop
    printf("\n");

    return 0;
}
