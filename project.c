#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_QUESTION 200
#define MAX_ANSWER 2
#define TOTAL_QUESTIONS 3

typedef struct
{
    char question[MAX_QUESTION];
    char answerA[MAX_ANSWER];
    char answerB[MAX_ANSWER];
    char answerC[MAX_ANSWER];
    char answerD[MAX_ANSWER];
    char correct_answer;
} quiz_question;
int main(void)
{
    quiz_question quiz[TOTAL_QUESTIONS];

    strcpy(quiz[1].question, "what does the ++ operator do?");
    strcpy(quiz[1].answerA, "Add two to a number");
    strcpy(quiz[1].answerB, "Add one to a number");
    strcpy(quiz[1].answerC, "Subtract one from a number");
    strcpy(quiz[1].answerD, "Subtract two from a number");
    quiz[1].correct_answer = 'B';

    strcpy(quiz[2].question, "what does a pointer variable store?");
    strcpy(quiz[2].answerA, "A floating number");
    strcpy(quiz[2].answerB, "A string");
    strcpy(quiz[2].answerC, "A memory address");
    strcpy(quiz[2].answerD, "An array");
    quiz[2].correct_answer = 'C';

    strcpy(quiz[3].question, "when is a do-while loop condition checked?");
    strcpy(quiz[3].answerA, "Never");
    strcpy(quiz[3].answerB, "Before the loop body executes");
    strcpy(quiz[3].answerC, "While the loop body executes");
    strcpy(quiz[3].answerD, "After the loop body executes");
    quiz[3].correct_answer = 'D';

    double total_correct = 0;
    char answer;

    for (int i = 0; i < TOTAL_QUESTIONS; i++)
    {
        printf("Qestion %d: %s/n/n", (i + 1), quiz[i].question);
        printf("A)%s/n", quiz[i].answerA);
        printf("B)%s/n", quiz[i].answerB);
        printf("C)%s/n", quiz[i].answerC);
        printf("D)%s/n", quiz[i].answerD);
        printf("/nEnter Answer (A,B,C or D):");

        scanf(" %c", &answer);

        if (toupper(answer) == quiz[i].correct_answer)
        {
            total_correct++;
            printf("/n/n Correct Answer!");
        }
        else
        {
            printf("/n/nInorrect Answer!");
        }
    }
}