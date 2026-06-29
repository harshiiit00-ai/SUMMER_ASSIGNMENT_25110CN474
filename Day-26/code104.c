//code104
#include <stdio.h>
int main() {
    int score = 0, answer;
    printf("Welcome to the Quiz Application!\n");
    printf("Answer the following questions:\n\n");
    // Question 1
    printf("1. What is the capital of India?\n");
    printf("   1) Mumbai\n   2) Delhi\n   3) Kolkata\n   4) Chennai\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Delhi.\n\n");
    }
    // Question 2
    printf("2. Who is known as the Father of C language?\n");
    printf("   1) Dennis Ritchie\n   2) James Gosling\n   3) Bjarne Stroustrup\n   4) Guido van Rossum\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &answer);
    if (answer == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Dennis Ritchie.\n\n");
    }
    // Question 3
    printf("3. Which planet is known as the Red Planet?\n");
    printf("   1) Venus\n   2) Mars\n   3) Jupiter\n   4) Saturn\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Mars.\n\n");
    }
    // Final Score
    printf("Your final score: %d/3\n", score);

    if (score == 3) {
        printf("Excellent! You got all correct.\n");
    } else if (score == 2) {
        printf("Good job! You got 2 correct.\n");
    } else {
        printf("Keep practicing! You scored %d.\n", score);
    }
    return 0;
}
