#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
    int n1,n2,dg,oct,p;
    printf("\n Enter any number: ");
    scanf("%d",&n1);
    n2=0;
    while (n1>0)
    {
        dg=n1%10;
        n2=n2*10+dg;
        n1=n1/10;
    }
    n1=n2;
    p=oct=0;
    while (n1>0)
    {
        dg=n1%8;
        n1=n1/8;
        oct=oct + dg*pow(10,p);
        p++;
    }
    printf("The octal equivalent of %d is %d", n2,oct);

}
