#include <stdio.h>

void calculateBill(int *total)
{
    printf("\n==============================");
    printf("\nTotal Bill = %d Taka", *total);
    printf("\n==============================\n");
}

int main()
{
    char item[5][20] = {
        "Cake",
        "Bread",
        "Cookie",
        "Donut",
        "Pastry"
    };

    int price[5] = {500,100,50,80,150};

    int choice, quantity;
    int total = 0;
    int n;
    char order;

    printf("===== Ctrl + Bake Bakery Management System =====\n");


    printf("\nAvailable Items:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d. %s - %d Tk\n",
        i+1, item[i], price[i]);
    }


    printf("\nDo you want to order? (Y/N): ");
    scanf(" %c", &order);


    if(order == 'Y' || order == 'y')
    {
        printf("\nHow many items do you want to order? ");
        scanf("%d", &n);


        for(int j = 0; j < n; j++)
        {
            printf("\nChoose Item (1-5): ");
            scanf("%d", &choice);

            if(choice >= 1 && choice <= 5)
            {
                printf("Enter Quantity: ");
                scanf("%d", &quantity);

                if(quantity > 0)
                {
                    total += price[choice-1] * quantity;

                    printf("%s added successfully!\n",
                    item[choice-1]);
                }
                else
                {
                    printf("Invalid Quantity!\n");
                }
            }
            else
            {
                printf("Invalid Choice!\n");
            }

        }

        calculateBill(&total);
        printf("Thank You For Ordering!");
    }

    else if(order == 'N' || order == 'n')
    {
        printf("\nNo problem! Visit us again.");
    }
    else
    {
        printf("\nInvalid Input!");
    }
    return 0;
}
