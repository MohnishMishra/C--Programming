#include <stdio.h>
#include <conio.h>
main()
{
    int i=1,j=1,k=1;
    for (i=1;i<=3;i++)
    {
        for (j=1;j<=3;j++)
        {
            for (k=1;k<=3;k++)
                printf("%d%d%d \t",i,j,k);
        }
    }

}
