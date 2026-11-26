#include <stdio.h>

int main()
{
    float balance = 5000;
    float amount;
    int choice;

    do
    {
        printf("\n\n===== ATM SIMULATION =====");
        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nCurrent Balance = %.2f", balance);
                break;

            case 2:
                printf("\nEnter deposit amount: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    balance = balance + amount;
                    printf("\nDeposit successful!");
                    printf("\nNew Balance = %.2f", balance);
                }
                else
                {
                    printf("\nInvalid amount!");
                }
                break;

            case 3:
                printf("\nEnter withdrawal amount: ");
                scanf("%f", &amount);

                if(amount > 0 && amount <= balance)
                {
                    balance = balance - amount;
                    printf("\nWithdrawal successful!");
                    printf("\nRemaining Balance = %.2f", balance);
                }
                else
                {
                    printf("\nInvalid amount or insufficient balance!");
                }
                break;

            case 4:
                printf("\nThank you for using our ATM!");
                break;

            default:
                printf("\nInvalid choice!");
        }

    } while(choice != 4);

    return 0;
}