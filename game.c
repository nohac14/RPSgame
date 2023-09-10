#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int PlayerInput;
    int CPUInput;

    srand(time(NULL)); // Moved srand to the main function to seed the random number generator only once.

    while (1) 
    {
        PlayRPS(&PlayerInput); // Pass the address of PlayerInput to modify it

        printf("\nPlay Again? |YES(1)|NO(2)|\nYOU: ");
        scanf("%d", &PlayerInput); // Corrected the scanf format and added the & symbol to read the input into PlayerInput.

        if (PlayerInput != 1)
            break;
    }

    return 0;
}

void PlayRPS(int *PlayerInput)
{
    printf("CHOOSE YOUR FIGHTER!\n|ROCK(1)|PAPER(2)|SCISSORS(3)|\n");
    *PlayerInput = ChoicePlayer(*PlayerInput); // Pass the address and dereference PlayerInput
    int CPUInput = ChoiceCPU();
    printf("CPU: %d", CPUInput);
    Fight(*PlayerInput, CPUInput);
}

int ChoiceCPU()
{
    int choice = rand() % 3;
    return choice;
}

int ChoicePlayer(int playerInput)
{
    printf("YOU: ");
    scanf("%d", &playerInput); // Corrected the scanf format and added the & symbol to read the input into playerInput.
    return playerInput;
}

void Fight(int pI, int cI) {
    if (pI == 1) {
        if (cI == 0) {
            printf("\nDRAW");
        }
        else if (cI == 1) {
            printf("\nYOU LOSE.");
        }
        else {
            printf("\nYOU WIN!");
        }
    }
    if (pI == 2) {
        if (cI == 0) {
            printf("\nYOU WIN!");
        }
        else if (cI == 1) {
            printf("\nDRAW");
        }
        else {
            printf("\nYOU LOSE.");
        }
    }
    if (pI == 3) {
        if (cI == 0) {
            printf("\nYOU LOSE");
        }
        else if (cI == 1) {
            printf("\nYOU WIN!");
        }
        else {
            printf("\nDRAW");
        }
    }
}