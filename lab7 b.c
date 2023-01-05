#include <stdio.h>
#include <conio.h>
main()
{
float km,m,cm,ft,inch;

printf("\n Enter the distance in kilometers= ");
scanf("%f",&km);


m=km*1000;
cm=m*100;
inch=cm/2.54;
ft=inch/12;

printf("\n Distance in meters= %f",m);
printf("\n Distance in centimeters= %f",cm);
printf("\n Distance in feet= %f",ft);
printf("\n Distance in inches= %f",inch);
getch();
}
