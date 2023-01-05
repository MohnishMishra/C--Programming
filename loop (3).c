#include <stdio.h>
#include <conio.h>
main ()
{
    int x,y,i=1;
    long int power=1;
    printf("Enter the two numbers: ");
    scanf("%d %d", &x,&y);
    while (i<=y)
    {
        power = power *x;
        i++;
    }
    printf("\n %d to the power %d is %ld", x,y,power);
}
