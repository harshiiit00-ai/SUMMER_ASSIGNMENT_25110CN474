//code92
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int freq[256] = {0}; 
    int max = 0;
    char result;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n' && str[i] != ' ') {
            freq[(unsigned char)str[i]]++;
            if(freq[(unsigned char)str[i]] > max) {
                max = freq[(unsigned char)str[i]];
                result = str[i];
            }
        }
    }
    if(max > 0) {
        printf("Maximum occurring character: '%c' (appears %d times)\n", result, max);
    } else {
        printf("No valid characters found.\n");
    }
    return 0;
}
