#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
If you want to learn about this project, please refer to README.md
*/

// Function to check card number and pin from file
int checkCardAndPin(long long int enteredCardNo, int enteredPin)
{
    FILE *file = fopen("data.txt", "r");
    if (file == NULL)
    {
        printf("Error: Could not open data.txt\n");
        return 0;
    }

    long long int cardNoFromFile;
    int pinFromFile;
    int found = 0;

    // Read the file line by line
    while (fscanf(file, "%lld %d", &cardNoFromFile, &pinFromFile) != EOF)
    {
        if (cardNoFromFile == enteredCardNo && pinFromFile == enteredPin)
        {
            found = 1; // Card number and PIN matched
            break;
        }
    }

    fclose(file);   // closing the file
    return found;
}

int main()
{
    system("cls");
    printf("=========================================\n\n");
    printf("------- Welcome To The ATM Services -----\n\n");
    printf("=========================================\n\n");

    long long int cardNo;
    int choice, deposit;
    int enteredPin;
    int balance = 10000;
    int withdrawal = 0;

    printf("Enter your 12-digit card no. : ");
    scanf("%lld", &cardNo);

    // Check if the cardNo is exactly 12 digits
    if (cardNo < 100000000000 || cardNo > 999999999999)
    {
        printf("\n>>> Invalid Card Number. Please enter a 12-digit card number.\n");
        return 0;
    }

    printf("Enter 5-digit PIN : ");
    scanf("%d", &enteredPin);

    // Check card number and pin from data.txt
    if (!checkCardAndPin(cardNo, enteredPin))
    {
        printf("\n>>> Invalid Card Number or Pin.\n");
        return 0;
    }

    while (1)
    {
        printf("\n=========================================\n");
        printf("Please choose an option :\n1. Check balance\n2. Withdraw Money\n3. Deposit Money\n4. Exit\n\nYour Choice : ");
        scanf("%d", &choice);
        printf("=========================================\n\n");
        switch (choice)
        {
        case 1: // check balance
            printf("Your Balance is Rs%d.\n", balance);
            break;
        case 2: // Withdraw money
            printf("Enter amount for withdrawal : Rs ");
            scanf("%d", &withdrawal);
            if (withdrawal < 0 || withdrawal > balance)
            {
                printf("Invalid amount.\nExited.");
                return 0;
            }
            balance -= withdrawal;
            printf("Your Current Balance is Rs %d.\n", balance);
            break;
        case 3: // Deposit money
            printf("Enter the amount to deposit : Rs ");
            scanf("%d", &deposit);
            if (deposit < 0)
            {
                printf("Invalid amount.\nExited.");
                return 0;
            }
            else
            {
                balance += deposit;
                printf("Your Current Balance is Rs%d.\n", balance);
            }
            break;

        case 4:
            printf("Exited.");
            return 0;
        }
    }

    return 0;
}
