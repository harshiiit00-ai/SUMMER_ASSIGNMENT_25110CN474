//code100
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[200], words[50][50], temp[50];
    int count = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int i = 0, j = 0;
    for (int k = 0; str[k] != '\0'; k++) {
        if (!isspace(str[k]) && str[k] != '\n') {
            words[count][j++] = str[k];
        } else if (j > 0) {
            words[count][j] = '\0';
            count++;
            j = 0;
        }
    }
    if (j > 0) { 
        words[count][j] = '\0';
        count++;
    }
    // Sorting words by length (bubble sort style)
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
    printf("\nWords sorted by length:\n");
    for (i = 0; i < count; i++) {
        printf("%s\n", words[i]);
    }
    return 0;
}
