#include <stdio.h>
#include <conio.h>
main()
{
    int i=1,a,b,c;
    while (i<=500)
    {
        a=i%10;
        b=i%100;
        b=(b-a)/10;
        c=i/10;
        if ((a*a*a)+(b*b*b)+(c*c*c)==i)
            printf("%d \n",i);
        i++;
    }
}
