#include<stdio.h>
#include<conio.h>
int main()
{
    int c=0, num, a, n, x=0, i;
    while(c!=4)
    {
        printf("please select what you wish to conduct from the given below options: \n");
        printf("\n 1. Factorial of a number \n 2. Prime or not\n 3. Odd or even\n 4. Exit\n");
        printf("\n Enter your choice:");
        scanf("%d", &c);
        switch(c)
        {
            case 1:                 // for factorial
                printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;
                a=num;
                while(num>1)
                {
                    a = a*(num-1);
                    num = num-1;
                }
                printf("\n Factorial of %d is %d:",n, a);
                break;
            case 2:                     //for prime or nit
                printf("\n Enter an integer: ");
                scanf("%d", &num);
                n=num;
                for(i=2;i<=n/2;i++)
                {
                    if(num%i==0)
                    {
                        x=1;
                        break;
                    }
                }
                if(num==1)
                    printf("\n 1 is neither prime nor composite");
                else
                {
                        if(x==0)
                            printf("\n %d is Prime Number.\n\n", n);
                        else
                            printf("\n %d is not a Prime Number.\n\n", n);
                }
                break;
            case 3:                                 //for odd or even
                printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;

                if(num%2==0)
                    printf("\n%d is Even Number.\n\n",n);
                else
                    printf("\n%d is Odd Number.\n\n",n);
                break;
            case 4:                                 // to exit
                printf("\nExit");
                break;
        }
    }
}
