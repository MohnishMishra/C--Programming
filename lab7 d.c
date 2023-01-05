#include <stdio.h>
#include <conio.h>
main()
{
int l,b,r,ar1,peri;
float ar2,circum;
printf("enter the length and breadth of rectangle=");
scanf("%d %d",&l,&b);
ar1=l*b;
peri=2*(l+b);
printf("\n Area of rectangle= %d",ar1);
printf("\n Perimeter of rectangle= %d",peri);

printf("\n enter radius of the cicle= ");
scanf("%d",&r);
ar2=3.14*r*r;
circum=2*3.14*r;
printf("area of circle= %f",ar2);
printf("")

}
