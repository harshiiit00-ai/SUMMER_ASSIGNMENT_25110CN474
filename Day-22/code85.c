//CODE85
#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while(start < end) {
        if(str[start] != str[end]) {
            return 0;                       // not palindrome
        }
        start++;
        end--;
    }
    return 1;                               // palindrome
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if(isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}
