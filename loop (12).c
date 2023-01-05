#include <stdio.h>
#include <conio.h>
main()
{
    int i=7,j;
    float fact, sum=0.0;
    while (i<=7)
    {
        fact=1.0;
        for (j=1;j<=i;j++)
            fact=fact*j;
        sum=sum + i/fact;
        i++;
    }
    printf("sum of series = %f",sum);
}
