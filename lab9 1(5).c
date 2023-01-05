#include <stdio.h>
#include <conio.h>
main()
{
int x;
float y,prod;
float product (int,float);
printf("Enter float value and integer value=");
scanf("%f %d",&y,&x);
prod=product(x,y);
printf("\n product of %f and %d=%f",y,x,prod);
}
float product(int x,float y)
{
    float p;
    p=x*y;
    return (p);
}

