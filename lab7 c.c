#include <stdio.h>
#include <conio.h>
main()
{
int m1,m2,m3,m4,m5,agr;
float per;
printf("enter the marks in 5 subjects= ");
scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);
agr=m1+m2+m3+m4+m5;
per=(agr/5);

printf("\n Aggregate Marks= %d", agr);
printf("\n Percentage Marks= %f", per);

}
