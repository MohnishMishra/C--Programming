#include <stdio.h>
#include <conio.h>
main()
{
    float otpay;
    int hour, i=1;
    while (i<=10)
    {
        printf("\n Enter no. of hours worked: ");
        scanf("%d",&hour);
        if (hour>=40)
        {
            otpay=(hour-40)*12;
            printf("number of hours worked= %d \n overtime pay= Rs %f",hour, otpay);
        }
        else
        {
            otpay=0;
            printf("\n Number of hours worked (%d) is less that 40 hours. \n Hence no overtime pay", hour);
        }
        break;
    }
}
