#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("color 0d");
    
    /*
    // color <num_Alphabet>
    0 = Black	8 = Gray
    1 = Blue	9 = Light Blue
    2 = Green	A = Light Green
    3 = Aqua	B = Light Aqua
    4 = Red	    C = Light Red
    5 = Purple	D = Light Purple
    6 = Yellow	E = Light Yellow
    7 = White	F = Bright White
    */

    printf("------ Guess the Number Game ---------\n");

    printf("\nSelect Mode : \nPress 1 for Easy\nPress 2 for Medium\nPress 3 for Hard\nPress 4 for Super Hard\n>>> ");
    int mode;
    scanf("%d",&mode);
    int chance;
    switch (mode)
    {
    case 1:
        chance = 10; // Easy
        break;
    case 2:
        chance = 7;  // Intermediate - Thala for a reason
        break;
    case 3:
        chance = 5; // Hard
        break;
    case 4:
        chance = 3; // Super hard
        break;
    
    default:
        printf("Invalid input");
        break;
    }
    

    int choose;
    srand(time(0));
    int guessNum = rand() % (100 + 1);

    do
    {
        printf("\nChance left : %d", chance);
        printf("\n\nEnter a number[0 to 100]: ");
        scanf("%d", &choose);

        if (choose > guessNum)
        {
            printf("Hint : Lesser number.");
            --chance;
        }
        else if (choose < guessNum)
        {
            printf("Hint : Greater number.");
            --chance;
        }
        else
        {
            printf("[ You win. ]");
            exit(1);
        }
    } while (chance > 0);

    printf("\n\nYou lose.\n\nOriginal number was %d.", guessNum);
    return 0;
}