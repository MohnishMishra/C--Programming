#include <stdio.h>
#include <conio.h>

main()
{
int num,a,n;
int sum=0;
printf("Enter the five digit number=");
scanf("%d",&num);

a=num%10;
n=num/10;
sum=sum+a;

a=n%10;
n=n/10;
sum=sum+a;

a=n%10;
n=n/10;
sum=sum+a;

a=n%10;
n=n/10;
sum=sum+a;

a=n%10;
sum=sum+a;

printf("the sum of five digits of %d is %d",num,sum);
}
