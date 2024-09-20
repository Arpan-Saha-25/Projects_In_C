#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int random(){
    /*
    Here, we are using time in seconds to create a function that randomly returns a value.
    */
    time_t seconds;
    seconds = time(NULL);
    if(seconds % 2 == 0) return 1;
    else if(seconds % 2 == 1) return 2;
    else return 3;
}

int main() {
    // Game Starts
    while(1){
    printf("-------------- ROCK PAPER SCISSOR --------------\n");
    
    // Interaction 

    // Selection of a option by the Player 
    int Pselect; 
    printf("\nSelect your move : \n-Press 1 for Rock\n-Press 2 for Paper\n-Press 3 for Scissor\n-Press 4 to exit\n\n>>> ");
    scanf("%d",&Pselect);
    printf("\nYour move : ");
    switch (Pselect)
    {
    case 1:
        printf("Rock\n");
        break;
    case 2:
        printf("Paper\n");
        break;
    case 3:
        printf("Scissor\n");
        break;
    
    default:
        printf("Thanks for playing :-)");
        exit(1);
    }

    // Selction of a option by the Computer by using random() function.
    int Cselect = random();
    printf("Computer's move : ");
    switch (Cselect)
    {
    case 1:
        printf("Rock\n");
        break;
    case 2:
        printf("Paper\n");
        break;
    case 3:
        printf("Scissor\n");
        break;
    
    default:
        printf("Invalid move");
        exit(1);
    }

    // Declaring the winner.
    if(Pselect == Cselect) printf("Result : DRAW.\n");
    else if(Pselect == 1 && Cselect == 3 || Pselect == 2 && Cselect == 1 || Pselect == 3 && Cselect == 2) printf("Result : Player Wins.\n");
    else printf("Result : Computer Wins.\n");

    printf("\n\n\npress any key .....");
    getch();
    system("cls");

    }
    return 0;
}
