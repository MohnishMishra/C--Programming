#include <stdio.h>
#include <conio.h>

main()
{
int n,a,sum=0;
printf("\n enter a four digit number= ");
scanf("%d",&n);

a=n/1000;
sum=sum+a;

a=n%10;
sum=sum+a;

printf("\n sum of first and last digit of %d=%d",n,sum);

}
