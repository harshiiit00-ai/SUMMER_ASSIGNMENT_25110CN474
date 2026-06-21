//code84
#include <stdio.h>
int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf(" %[^\n]", str); 
    for(i = 0; str[i] != '\0'; i++) {
    if(str[i] >= 'a' && str[i] <= 'z') {
    str[i] = str[i] - 32;                           // Converting to uppercase
        }
    }
    printf("Uppercase string: %s\n", str);
    return 0;
}
