#include <stdio.h>
#include <conio.h>

main()
{
int x,y;
long pow,power();
printf("enter 2 numbers=");
scanf("%d %d",&x,&y);
pow=power(x,y);
printf("\n %d to the power of %d= %d",x,y,pow);
}
long power(int x,int y)
{
    int i;
    long p=1;
    for (i=1;i<=y;i++)
        p=p*x;
    return (p);
}
