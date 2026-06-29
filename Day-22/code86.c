//CODE86
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int countWords(char str[]) {
    int count = 0;
    int inWord = 0;                          // flag to check if we are inside a word
    for(int i = 0; str[i] != '\0'; i++) {
        if(!isspace(str[i])) {
            if(inWord == 0) {
                count++;                     // new word starts
                inWord = 1;                  // now inside a word
            }
        } else {
            inWord = 0;                      // space ends the word
        }
    }
    return count;
}
int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    int words = countWords(sentence);
    printf("Total words: %d\n", words);
    return 0;
}
