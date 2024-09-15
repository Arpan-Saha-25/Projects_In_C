```markdown
# Guess the Number Game

## Description

This is a simple "Guess the Number" game implemented in C. The program generates a random number between 0 and 100, and the player has to guess the number within a limited number of chances based on the difficulty level selected. The game provides hints if the guessed number is higher or lower than the target number.

## Features

- **Difficulty Levels**: Choose between four difficulty modes:
  - Easy: 10 chances
  - Medium: 7 chances
  - Hard: 5 chances
  - Super Hard: 3 chances
- **Hints**: Provides hints if the guess is too high or too low.
- **Color Scheme**: The console background color is set to purple for better visibility.

## Installation

1. **Clone the repository** (if applicable):
   ```bash
   git clone <repository_url>
   ```

2. **Navigate to the project directory**:
   ```bash
   cd <project_directory>
   ```

3. **Compile the code** using a C compiler. For example:
   ```bash
   gcc -o guess_game guess_game.c
   ```

## Usage

1. **Run the compiled program**:
   ```bash
   ./guess_game
   ```

2. **Follow the on-screen instructions**:
   - Select a difficulty level by entering a number (1-4).
   - Guess a number between 0 and 100.
   - The program will give you hints and indicate the number of chances left.
   - The game ends when you either guess the number correctly or run out of chances.

## Example

```
------ Guess the Number Game ---------

Select Mode : 
Press 1 for Easy
Press 2 for Medium
Press 3 for Hard
Press 4 for Super Hard
>>> 2

Chance left : 7

Enter a number[0 to 100]: 50
Hint : Lesser number.

Chance left : 6

Enter a number[0 to 100]: 25
Hint : Greater number.

Chance left : 5

Enter a number[0 to 100]: 37
[ You win. ]
```

## Notes

- **Console Color**: The program sets the console color to purple using `system("color 0d")`. This may not work on non-Windows systems. Consider using platform-independent libraries or methods for changing console colors if needed.
- **Portability**: The code uses `conio.h` and `system("color")`, which are specific to Windows. If you want the program to run on other operating systems, you may need to use alternative libraries or modify the code accordingly.
- **Dependencies**: Ensure that you have a compatible C compiler and development environment set up. The program is designed to be compiled and run in a Windows environment.

## Contributing

If you would like to contribute to this project, please fork the repository, make your changes, and submit a pull request.

## Contact

For any questions or feedback, please contact [arpansaha004@gmail.com].

```
