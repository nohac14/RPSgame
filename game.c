#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int PlayerInput;

    srand(time(NULL)); // Seed the random number generator once.

    while (1) 
    {
        PlayRPS(&PlayerInput); // Call PlayRPS and pass the address of PlayerInput to modify it

        printf("\nPlay Again? |YES(1)|NO(2)|\nYOU: ");
        scanf("%d", &PlayerInput);

        if (PlayerInput != 1)
            break;
    }

    return 0;
}

// Function to play Rock-Paper-Scissors
void PlayRPS(int *PlayerInput)
{
    printf("CHOOSE YOUR FIGHTER!\n|ROCK(1)|PAPER(2)|SCISSORS(3)|\n");
    ChoicePlayer(PlayerInput); // Call ChoicePlayer and pass the address of PlayerInput to get the user's choice
    int CPUInput = ChoiceCPU(); // Get the CPU's choice
    printf("CPU: %d", CPUInput);
    Fight(*PlayerInput, CPUInput); // Call the Fight function with player and CPU choices
}

// Function for the CPU to make a random choice
int ChoiceCPU()
{
    int choice = rand() % 3 + 1; // Generate a random number (1, 2, or 3)
    return choice;
}

// Function for the player to choose
int ChoicePlayer(int *playerInput)
{
    printf("YOU: ");
    scanf("%d", &*playerInput); // Read the user's choice and store it in the location pointed to by playerInput
    return *playerInput;
}

// Function to determine the winner
void Fight(int pI, int cI)
{
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