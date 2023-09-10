#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int PlayerInput;

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
    ChoicePlayer(PlayerInput); // Pass the address and dereference PlayerInput
    int CPUInput = ChoiceCPU();
    printf("CPU: %d", CPUInput);
    Fight(*PlayerInput, CPUInput);
}

int ChoiceCPU()
{
    int choice = rand() % 3 + 1;
    return choice;
}

int ChoicePlayer(int *playerInput)
{
    printf("YOU: ");
    scanf("%d", &*playerInput); // Corrected the scanf format and added the & symbol to read the input into playerInput.
    return playerInput;
}

void Fight(int pI, int cI) {
    if (pI == cI) {
        printf("\nDRAW");
    }
    else if ((pI == 1 && cI == 3) || (pI == 2 && cI == 1) || (pI == 3 && cI == 2)) {
        printf("\nYOU WIN!");
    }
    else {
        printf("\nYOU LOSE.");
    }
}