#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
    float q,r,n,p,a;
    int i;
    for (i=0;i<1;i++)
    {
        printf("Enter the principle amount: ");
        scanf("%f",&p);
        printf("Enter the rate of interest:");
        scanf("%f",&r);
        printf("Enter the number of years: ");
        scanf("%f",&n);
        printf("Enter the compounding period: ");
        scanf("%f",&q);
        a=p+pow((1+(r/q)),(n/q));
        printf("\n \n total amount =%f",a);
    }
}
