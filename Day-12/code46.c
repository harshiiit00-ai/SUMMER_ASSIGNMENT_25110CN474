//code46 Armstrong using Function
#include <stdio.h>
#include <math.h>
int isArmstrong(int num){
    int original = num;
    int n = 0, remainder;
    double result = 0.0;
    while (original != 0) {
        original /= 10;
        n++;
    }
    original=num;
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }
    return (int)result == num; // return 1 if Armstrong, else 0
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}
