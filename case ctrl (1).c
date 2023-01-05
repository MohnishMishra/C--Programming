#include <stdio.h>
#include <conio.h>
main()
{
    int choice, num, i;
    unsigned long int fact;
    while (1)
    {
        printf("\n \n 1. factorial \n 2.Prime \n 3. Odd/even \n 4.Exit \n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\n Enter number:");
            scanf("%d",&num);
            fact=1;
            for(i=1;i<=num;i++)
                fact=fact*i;
            printf("\n factorial  value = %lu",fact);
            break;
        case 2:
            printf("Enter number:");
            scanf("%d",&num);
            for (i=2; i<num;i++)
            {
                if (num%i==0)
                {
                    printf("\n not a prime number");
                    break;
                }
            }
            if (i==num)
                printf("\n prime number");
            break;
        case 3:
            printf("Enter number: ");
            scanf("%d",&num);
            if (num%2==0)
                printf("\n Even number");
            else
                printf("\n odd number");
            break;
        case 4:
            end();
        }
    }
}
