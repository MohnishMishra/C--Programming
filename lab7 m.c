#include <stdio.h>
#include <conio.h>
main()
{
int a,n,num;
long int newnum=0;
printf("\n enter a 5 digit number");
scanf("%d",&num);
a=num/10000 + 1;
n=num%10000;
newnum=newnum+a*10000;
a=n/1000+1;
n=n%1000;
newnum=newnum+a*1000;
a=n/100+1;
n=n%100;
newnum=newnum+a*100;
a=n/10+1;
n=n%10;
newnum=newnum+a*10;
a=n+1;
newnum=newnum+a;
printf("\n the sum of the 5 digits of %d is %ld",num,newnum);

}
