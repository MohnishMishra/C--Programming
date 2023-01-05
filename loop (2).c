#include <stdio.h>
#include <conio.h>
main ()
{
    int num, i= 1;
    unsigned long int fact =1;
    printf("enter any number less than 34: ");
    scanf("%d", &num);
    while (i<=num)
    {
        fact = fact*i;
        i++;
    }
    printf("\n factorial of %d=%lu",num,fact);
}
