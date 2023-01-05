#include <stdio.h>
#include <conio.h>
int main()
{
 int yr;
 printf("Enter a year:\n");
 scanf("%d",&yr);
 if(yr%100==0)
 {
 if(yr%400==0)
 printf("Leap year\n");
 else
 printf("Not a leap year\n");
 }
 else
 {
 if(yr%4==0)
 printf("Leap year\n");
 else
 printf("Not a leap year\n");
 }
 printf("/n/n/n/n/nPress any key to exit...");
 getch();
}
