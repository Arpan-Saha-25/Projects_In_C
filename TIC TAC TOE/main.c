#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

// Displays board
void showBoard();

// Checks for Winner
int checkForWin();

// Main
int main()
{
    int player = 1, choice,check;
    char mark;
    do
    {
        showBoard();
        player = (player % 2) ? 1 : 2;
        printf("player%d's turn: ",player);
        scanf("%d",&choice);

        // player 1 = X and player 2 = 0
        mark = (player == 1) ? 'X' : '0';

        if (choice == 1 && arr[1] == '1')
            arr[1] = mark;
        else if (choice == 2 && arr[2] == '2')
            arr[2] = mark;
        else if (choice == 3 && arr[3] == '3')
            arr[3] = mark;
        else if (choice == 4 && arr[4] == '4')
            arr[4] = mark;
        else if (choice == 5 && arr[5] == '5')
            arr[5] = mark;
        else if (choice == 6 && arr[6] == '6')
            arr[6] = mark;
        else if (choice == 7 && arr[7] == '7')
            arr[7] = mark;
        else if (choice == 8 && arr[8] == '8')
            arr[8] = mark;
        else if (choice == 9 && arr[9] == '9')
            arr[9] = mark;
        
        else    // wrong input , again chance for the same player
        {
            printf("Invalid Input\n");
            player--;
            getch();
        }
        
        check = checkForWin();  // 0, 1 ,-1
        player++;
    } while (check == -1);


    showBoard();
    if(check == 1)
        printf(">>> Player %d won. \n\n",--player);
    else    
        printf(">>> Game Draw.\n\n");
    return 0;
}

void showBoard()
{
    system("cls");
    system("color 0A");
    printf("------ Tic Tac Toe By Arpan ------ \n\n");
    printf("    |      |    \n");
    printf("  %c |   %c  |  %c  \n", arr[1], arr[2], arr[3]);
    printf("    |      |    \n");
    printf("----|------|------\n");
    printf("    |      |    \n");
    printf("  %c |   %c  |  %c  \n", arr[4], arr[5], arr[6]);
    printf("    |      |    \n");
    printf("----|------|------\n");
    printf("    |      |    \n");
    printf("  %c |   %c  |  %c  \n", arr[7], arr[8], arr[9]);
    printf("    |      |    \n\n");
}

int checkForWin(){
    // Win Cases
    //  For Rows
    if (arr[1] == arr[2] && arr[2] == arr[3])
        return 1;

    else if (arr[4] == arr[5] && arr[5] == arr[6])
        return 1;
    else if (arr[7] == arr[8] && arr[8] == arr[9])
        return 1;
    // For Columns
    else if (arr[1] == arr[4] && arr[4] == arr[7])
        return 1;
    else if (arr[2] == arr[5] && arr[5] == arr[8])
        return 1;
    else if (arr[3] == arr[6] && arr[6] == arr[9])
        return 1;
    else if (arr[3] == arr[6] && arr[6] == arr[9])
        return 1;
    // Diagonals
    else if (arr[1] == arr[5] && arr[5] == arr[9])
        return 1;
    else if (arr[3] == arr[5] && arr[5] == arr[7])
        return 1;
    else if (arr[1] != '1' && arr[2] != '2' && arr[3] != '3' && arr[4] != '4' && arr[5] != '5' && arr[6] != '6' && arr[7] != '7' && arr[8] != '8' && arr[9] != '9')
        return 0;
    
    else 
        return -1;
}
