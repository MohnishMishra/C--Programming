#include <stdio.h>
#include <conio.h>
main()
{
    int s;
    int getsum(int);
    s=getsum(0);
    printf("\n The sum of the first 25 natural numbers is %d",s);
}
int getsum(int n)
{
    int sum=0;
    if (n==25)
        return sum;
    sum = n+getsum(++n);
    return (sum);
}
