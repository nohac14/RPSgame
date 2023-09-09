#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    playRPS();

    return 0;
}

void playRPS() {
    printf("CHOOSE YOUR FIGHTER!\n|ROCK(1)|PAPER(2)|SCISSOR(3)|\n");
    int PlayerInput;
    choicePlayer(PlayerInput);
}

int ChoiceCPU() {
    srand(time(NULL));
    int choice = rand() % 3;
    return choice;
}

int ChoicePlayer(int playerInput) {
    scanf("YOU: %d", playerInput);
    return playerInput;
}

