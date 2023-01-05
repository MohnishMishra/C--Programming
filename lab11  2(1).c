#include <stdio.h>
#include <conio.h>
int main()
{
 float cp,sp,p,l;
 printf("Enter cost price and selling price:\n");
 scanf("%f%f",&cp,&sp);
 p=sp-cp;
 l=cp-sp;
 if(p>0)
 printf("The seller has made a profit of Rs.%f\n",p);
 if(l>0)
 printf("The seller has made a loss of Rs.%f\n",l);
 if(p==0)
 printf("There is no loss, no profit\n");
 printf("/n/n/n/n/nPress any key to exit...");
 getch();
}
