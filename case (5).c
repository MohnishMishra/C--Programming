#include <stdio.h>
#include <conio.h>
main()
{
    int n,a,b,num;
    long int revnum=0;
    printf("\n enter a five digit number less than 32767: \t");
    scanf("%d",&n);
    num=n;
    a=n%10;
    n=n/10;
    revnum=revnum +a*10000;
    a=n%10;
    n=n/10;
    revnum=revnum +a*10000;
    a=n%10;
    n=n/10;
    revnum=revnum +a*10000;
    a=n%10;
    n=n/10;
    revnum=revnum +a*10000;
    a=n%10;
    revnum=revnum +a;
    if (revnum==num)
        printf("\n given number and its reversed number are equal");
    else
        printf("\n given number and its reversed number are not equal");

}
