Here's a beautified version of your markdown file for the **Rock-Paper-Scissors Game**:

---

# Rock-Paper-Scissors Game

## Description

This is a simple **Rock-Paper-Scissors** game implemented in C. The player competes against the computer, and each game determines a winner based on the classic rules:

- **Rock** beats **Scissors**  
- **Scissors** beats **Paper**  
- **Paper** beats **Rock**

The game continues in a loop until the player chooses to exit.

## Features

- Players can choose **Rock**, **Paper**, or **Scissors**.
- The computer randomly selects its choice.
- The result of each game (Player Wins, Computer Wins, or Draw) is displayed.
- The game clears the screen after each round and waits for the player to continue.
- An exit option is available to end the game.

## Compilation

To compile the program, use any C compiler like `gcc`:

```bash
gcc -o rps 01_RPS.c
```

## How to Play

1. After running the game, you’ll be prompted to select your move:
   - Press `1` for **Rock**
   - Press `2` for **Paper**
   - Press `3` for **Scissors**
   - Press `4` to exit the game
2. The computer will randomly choose its move.
3. The result will be displayed: either **Player Wins**, **Computer Wins**, or a **Draw**.
4. The game will prompt you to press any key to continue, and it will start the next round. To exit, press `4` during the selection phase.

## Example

```
-------------- ROCK PAPER SCISSOR --------------

Select your move:
- Press 1 for Rock
- Press 2 for Paper
- Press 3 for Scissors
- Press 4 to exit

>>> 1

Your move: Rock
Computer's move: Scissors
Result: Player Wins.
```

## Requirements

- C compiler (e.g., **GCC**)
- Console-based environment

## Notes

- The `random()` function uses the system time in seconds to generate the computer's move, making it less predictable.
- The game clears the screen after each round using `system("cls")`. If running on a system that does not support `cls` (like Linux/macOS), replace it with `system("clear")`.

## License

This project is open-source and available for all.

---
