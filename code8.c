//code 8 Palindrome
#include <stdio.h>
int main() {
    int num, reversed = 0, digit, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;  
    while(num != 0) {
        digit = num % 10;                  
        reversed = reversed * 10 + digit;  
        num /= 10;                         
    }
    if(original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    return 0;
}
