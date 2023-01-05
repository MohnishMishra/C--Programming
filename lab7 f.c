#include <stdio.h>
#include <conio.h>
main()
{
int c,d,e;
printf("enter the first number=");
scanf("%d",&c);
printf("enter the second number=");
scanf("%d",&d);

e=c;
c=d;
d=e;

printf("\n \n The new value of first number after interchange is=%d",c);
printf("\n The new value of the second number after the interchange is= %d \n",d);

}
