#include <stdio.h>
#include <conio.h>
main()
{
int amount,nohun,nofifty,noten;
printf("enter the amount to be withdrawn=");
scanf("%d",&amount);
nohun=amount/100;
amount=amount%100;
nofifty=amount/50;
amount=amount%50;
noten=amount/10;

printf("\n Number of hundred notes= %d",nohun);
printf("\n Number of fifty notes= %d", nofifty);
printf("\n numbero of ten notes= %d", noten);

}
