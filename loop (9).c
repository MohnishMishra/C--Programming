#include <stdio.h>
#include <conio.h>
main()
{
    int n,no,flag,small,big,range;
    flag=0;
    printf("\n how many numbers are there in a set?");
    scanf("%d", &n);
    while (n>0)
    {
        printf("\n Enter number: ");
        scanf("%d",&no);
        if (flag==0)
        {
            small = big = no;
            flag=1;
        }
        else
        {
            if (no>big)
                big=no;
            if (no<small)
                small = no;
        }
        n--;
    }
    if (small<0)
        range = small +big;
    else
        range = big-small;
    if (range <0)
        range = range * -1;
    printf("\n the range of a given set of numbers is %d", range);
}
