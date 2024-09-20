# Tic Tac Toe Game

## Overview
This is a simple console-based Tic Tac Toe game implemented in C. It allows two players to take turns in marking a 3x3 grid with their respective symbols (X and O) until one player wins or the game ends in a draw.

## Features
- Two players can play against each other.
- The game checks for a winning condition after every move.
- Invalid inputs are handled.
- The game displays the current state of the board after each turn.

## Requirements
- A C compiler that supports the C Standard Library (e.g., GCC).
- Windows OS (due to the use of <conio.h> for input management and system("cls") for clearing the screen).

## How to Compile and Run
1. Open your terminal or command prompt.
2. Navigate to the directory where your source code file (e.g., tictactoe.c) is located.
3. Compile the code using:
      gcc tictactoe.c -o tictactoe.exe
   
4. Run the executable:
      tictactoe.exe
   

## Code Structure

### Includes
```
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
```
- stdio.h: Provides functionality for input and output functions.
- conio.h: Provides console input/output functions (used here for getch()).
- stdlib.h: Used for various utility functions, including system().

### Global Variables
```
char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
```
- An array used to represent the Tic Tac Toe board.

### Functions
- void showBoard(): Displays the current state of the game board.
- int checkForWin(): Checks the board for a winning condition or if the game is a draw.

### Main Game Loop
- Players alternate turns, indicated by the player variable.
- Each player inputs their choice of position (1-9) for marking their symbol.
- The game checks for invalid input and allows the same player to try again if the input is invalid.
- The loop continues until there is a winner or a draw.

### Win Conditions
- The game checks rows, columns, and diagonals for a win.
- It also checks if the board is full without a winner to declare a draw.

## License
This project is open-source and available for personal and educational use. Feel free to modify and enhance the game.

## Acknowledgments
This game is a simple implementation aimed at beginners to help understand the basics of C programming and game design. Enjoy playing Tic Tac Toe!