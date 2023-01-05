#include <stdio.h>
#include <conio.h>
main()
{
    int num;
    printf("\n enter the number=");
    scanf("%d",&num);
    binary (num);
}
binary(int n)
{
    int r;
    r=n%2;
    n=n/2;
    if (n==0)
    {
        printf("\n The binary equivalent is %d",r);
        return (r);
    }
    else
        binary (n);
    printf("%d",r);
}
