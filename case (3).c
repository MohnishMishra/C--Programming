#include <stdio.h>
#include <conio.h>
main()
{
    int yr;
    printf("enter a year: ");
    scanf("%d",&yr);
    if (yr%4==0)
        printf("the year entered is a leap year");
    else
        printf("the year entered is not a leap year");
}
