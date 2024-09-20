## Overview

This is a simple Stopwatch application written in C. It displays the elapsed time in hours, minutes, and seconds in the console. The stopwatch increments every second and clears the screen to provide a refreshing view of the current time.

## Features
- Displays elapsed time in the format of HH:MM:SS
- Clears the screen every second for a clean interface
- Runs indefinitely until interrupted with Ctrl + C

## Requirements
- A C compiler that supports the Windows API (e.g., MinGW)
- Windows operating system (due to the use of <windows.h>)

## Code Explanation

### Includes
'''
#include <stdio.h>
#include <windows.h>
'''

- stdio.h: Standard Input/Output header for using printf.
- windows.h: Header for Windows API functions, utilized here for Sleep().

### Functions
#### clearScreen()
'''
void clearScreen() {
    printf("\033[H\033[J");
}
'''

- This function is intended to clear the console screen using ANSI escape codes. However, it may not work in all environments, since it is typically more reliable in terminal emulators supporting ANSI but not in the Windows console.

### main()
'''
int main() {
    ...
}
'''
- This is the entry point of the program. It initializes variables for hours, minutes, and seconds, and enters an infinite loop to continuously update and display the stopwatch's time.

### Variables
- int hours, minutes, seconds: These integers keep track of time in hours, minutes, and seconds.

### Main Loop
- The loop clears the screen, updates the stopwatch display, and pauses execution for one second using Sleep(1000).
- The time increments every second, and when seconds reach 60, it resets to 0 and increments the minute counter. Similarly, when minutes reach 60, it resets to 0 and increments the hour counter.

### Exit
- The application runs indefinitely and can be stopped by the user pressing Ctrl + C.

## Compilation and Execution
1. Compile the code:
   '''
   gcc stopwatch.c -o stopwatch.exe
   '''

2. Run the executable:
   '''
   stopwatch.exe
   '''

## Note
Due to the reliance on Windows-specific features, this code may not work on other operating systems without modification.