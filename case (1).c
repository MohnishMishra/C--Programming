#include <stdio.h>
#include <conio.h>
main()
{
    float cp,sp,p,l;
    printf("Enter the cost price and selling price: ");
    scanf("%f %f",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if (p>0)
        printf("the seller has made a profit of %f",p);
    if (l>0)
        printf("the seller has incurred a loss of %f",l);
    if (p==0)
        printf("there is no profit or loss");

}
