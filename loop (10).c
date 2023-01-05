#include <stdio.h>
#include <conio.h>
main()
{
    int i,n=1;
    printf("\n prime numbers between 1 and 300 are: \t ");
    while (n<=300)
    {
        i=2;
        while (i<n)
        {
            if (n%i==0)
                break;
            else
                i++;
        }
        if (i==n)
            printf("%d \t",n);
        n++;
    }
}
