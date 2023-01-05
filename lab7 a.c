#include <stdio.h>
#include <conio.h>

main()
{
float bp,da,hra,grp;

printf("enter the Basic Pay=");
scanf("%f",&bp);

da=0.4*bp;
hra=0.2*bp;
grp=bp+da+hra;

printf("\n Basic pay is= %f",bp);
printf("\n Dearness allowance is= %f",da);
printf("\n House rent is= %f",hra);
printf("\n Gross pay is= %f",grp);

printf("\n \n Therefore your gross salary is= %f", grp);
}
