#include <stdio.h>
#include <conio.h>
main()
{
float sp,cp,profit;
printf("\n enter the total selling price and profit:");
scanf("%f %f",&sp,&profit);
cp=sp-profit;
cp=cp/15;
printf("\n cost price per item is Rs%f",cp);

}
