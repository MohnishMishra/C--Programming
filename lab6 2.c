#include <stdio.h>
int main()
{
int a,b,c,d ;
printf("enter the first number : \n");
scanf("%d", &a);
printf("enter the second number: \n");
scanf("%d",&b);
printf("enter the third number: \n");
scanf("%d",&c);
printf("enter the fourth number: \n");
scanf("%d",&d);

printf("\n %d*%d/%d+%d = %d",a,b,c,d,a*b/c+d);
printf("\n %d+%d-%d*%d =%d", a,b,c,d,a+b-c*d);
printf("\n %d+%d*%d-%d%%%d= %d", a,b,d,c,a,a+b*d-c%a);
printf("\n %d/%d*%d+%d%%%d = %d", a,b,c,d,a/b*c+d%b);



}
