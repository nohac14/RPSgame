# Rock, Paper, Scissors Game in C

This project is a simple Rock, Paper, Scissors game implemented in C. The game allows the player to play multiple rounds of Rock, Paper, Scissors against the computer, with the option to play again or quit after each round.

## Project Structure

- **game.c**: The main file containing the logic for the Rock, Paper, Scissors game, including player input, CPU choice generation, determining the winner, and displaying the results.

## How It Works

The game operates in a loop where the player is repeatedly prompted to choose Rock, Paper, or Scissors. The computer generates a random choice, and the result of the round is displayed. The player can choose to play another round or exit the game.

### Key Functions

- **main**: The main function initializes the game, manages the game loop, and prompts the player to play again or exit.
- **clear**: Clears the console screen.
- **PlayRPS**: Manages a single round of Rock, Paper, Scissors, including getting the player's and CPU's choices and determining the winner.
- **ChoiceCPU**: Generates a random choice for the CPU.
- **ChoicePlayer**: Prompts the player for their choice and reads the input.
- **Fight**: Determines the winner of the round based on the player's and CPU's choices.

## How to Compile and Run

### Prerequisites

- GCC compiler

### Compilation

To compile the program, use the following command:
```bash
gcc game.c -o game
```

### Running the Game

To run the game, use the following command:
```bash
./game
```

### Example Usage

1. Run the `./game` command.
2. Choose Rock (1), Paper (2), or Scissors (3) when prompted.
3. The CPU's choice and the result of the round will be displayed.
4. Choose whether to play again (1) or quit (2).
5. The game will continue or exit based on the player's input.

### Code Explanation

- **Random Choice Generation**: `srand(time(NULL))` seeds the random number generator to ensure different random choices each time the game is played.
- **Game Loop**: The `while (1)` loop runs the game until the player chooses to exit by entering a number other than 1.
- **Function Calls**: Functions like `PlayRPS`, `ChoiceCPU`, `ChoicePlayer`, and `Fight` modularize the code, making it easier to read and maintain.

## Acknowledgements

- C Standard Library for providing necessary functions and utilities.
- GCC for compiling the C code.
