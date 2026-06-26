#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("===== Simple Quiz Application =====\n\n");

    printf("1. What is the Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    score++;

    printf("\n2. Which Language is used for C programming?\n");
    printf("1. python\n2. Java\n3. c\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer==3)
    score++;

    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer==3)
    score++;

    printf("\n===== RESULT =====\n");
    printf("Your Score = %d/3\n", score);

    if(score == 3)
    printf("Excellent!\n");
    else if(score == 2)
    printf("Good Job!\n");
    else if(score == 1)
    printf("Keep Practicing!\n");
    else
    printf("Better Luck Next Time!\n");

    return 0;
}


