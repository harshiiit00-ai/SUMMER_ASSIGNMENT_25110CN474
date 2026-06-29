//Code89
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int freq[256] = {0}; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
    if(str[i] != '\n') {
    freq[(unsigned char)str[i]]++;
        }
    }
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n' && freq[(unsigned char)str[i]] == 1) {
        printf("First non-repeating character: %c\n", str[i]);
        return 0;
        }
    }
    printf("No non-repeating character found.\n");
    return 0;
}
