#include <stdio.h>
#include <conio.h>
main()
{
    int year=0,i_cost=6000,profit=1000;
    int s_cost;
    float t1,t2,interest;
    int i;
    t2=i_cost;
    while (1)
    {
        year++;
        t1=i_cost+profit*year;
        interest=t2*0.012;
        t2=t2+interest;
        printf("\n t1=%f \t t2= %f+%f =%f",t1,t2-interest,interest,t2);
        if (t2>t1)
        {
            year--;
            break;
        }
    }
    printf("\n Minimum life of the machine is %d years.",year);
}
