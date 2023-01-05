#include <stdio.h>
#include <conio.h>
main()
{
    int leapdays,firstday,yr;
    long int normaldays, totaldays;
    printf("Enter year: ");
    scanf("%ld",&yr);
    normaldays=(yr-1)*365;
    leapdays=(yr-1)/4 - (yr-1/100) + (yr-1)/400;
    totaldays=normaldays+leapdays;
    firstday=totaldays%7;
    if (firstday==0)
        printf("\n monday");
    if (firstday==1)
        printf("\n tuesday");
    if (firstday==2)
        printf("\n wednesday");
    if (firstday==3)
        printf("\n thursday");
    if (firstday==4)
        printf("\n friday");
    if (firstday==5)
        printf("\n saturday");
    if (firstday==6)
        printf("\n sunday");
}
