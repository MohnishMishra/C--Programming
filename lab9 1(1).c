#include <stdio.h>
#include <conio.h>

main()
{
int num;
long factorial, fact();
printf("enter a number=");
scanf("%d",&num);
factorial=fact(num);
printf("\n factorial of %d=%ld \n",num,factorial);
}
long fact(int num)
{
int i;
long factorial=1;
for(i=1;i<=num;i++)
    factorial = factorial*i;
return (factorial);
}
