#include <stdio.h>
#include <conio.h>

main()
{
int n,a,b;
long int revnum=0;
printf("\n enter a five digit number=");
scanf("%d",&n);
a=n%10;
n=n/10;
revnum=revnum+a*10000;

a=n%10;
n=n/10;
revnum=revnum+a*1000;

a=n%10;
n=n/10;
revnum=revnum+a*100;

a=n%10;
n=n/10;
revnum=revnum+a*10;

a=n%10;
revnum=revnum+a;

printf("\n the reversed number is %ld",revnum);
}
