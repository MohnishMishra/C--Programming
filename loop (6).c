#include <stdio.h>
#include <conio.h>
main()
{
    int m=21,p,c;
    while (1)
    {
        printf("\n \n number of matches left =%d", m);
        printf("\n pick up 1,2,3 or 4 matches: \t");
        scanf("%d",&p);
        if (p>4 || p<1)
            continue ;
        m=m-p;
        printf("\n No. of matches left = %d",m);
        c=5-p;
        printf("\n out of which computer picked up %d",c);
        m=m-c;
        if (m==1)
        {
            printf("\n \n Number of matches left %d",m);
            printf("\n you lost the game !!");
            break;
        }
    }
}
