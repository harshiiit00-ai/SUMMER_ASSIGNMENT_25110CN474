//code98
#include <stdio.h>
#include <string.h>
void findCommonChars(char str1[], char str2[]) {
    int visited[256] = {0};
    for (int i = 0; str1[i] != '\0'; i++) {
        visited[(unsigned char)str1[i]] = 1;
    }
    printf("Common characters: ");
    int printed[256] = {0};
    for (int i = 0; str2[i] != '\0'; i++) {
        if (visited[(unsigned char)str2[i]] && !printed[(unsigned char)str2[i]]) {
            printf("%c ", str2[i]);
            printed[(unsigned char)str2[i]] = 1;
        }
    }
    printf("\n");
}
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    findCommonChars(str1, str2);
    return 0;
}
