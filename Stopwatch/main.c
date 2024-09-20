#include <stdio.h>
#include <windows.h>

void clearScreen() {
    printf("\033[H\033[J");
}

int main() {
    // Initialising variable 
    int hours = 0, minutes = 0, seconds = 0;
    
    while (1) {
        // clearing screen
        clearScreen();
    
        printf("\tStopwatch\n\n");
        printf("Hours:%.2d Min:%.2d Sec:%.2d\n", hours, minutes, seconds);
        printf("\n\nTo close, press ctrl + c .....\n");

        // Delay for 1000ms (1 second)
        Sleep(1000); 

        // Increasing seconds
        ++seconds;

        // Changing the time units 
        if (seconds == 60) {
            seconds = 0;
            ++minutes;
            if (minutes == 60) {
                minutes = 0;
                ++hours;
                if (hours == 24) {
                    // Reset after 24 hours
                    hours = 0; 
                }
            }
        }
    }

    return 0;
}
