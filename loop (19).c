#include <stdio.h>
#include <conio.h>
main()
{
    int i,j,k,t,f1,f2,f3,z,sp;
    sp=20;
    for(i=0;i<=4;i++)
    {
        for (k=0;k<sp-i;k++)
            printf(" ");
        sp-=2;
        for (j=0;j<=i;j++)
        {
            f1=f2=f3=1;
            t=i;
            while (t!=0)
            {
                f1=f1*t;
                t--;
            }
            t=j;
            while(t!=0)
            {
                f2=f2*t;
                t--;
            }
            t=i-j;
            while (t!=0)
            {
                f3=f3*t;
                t--;
            }
            z=f1/(f2*f3);
            printf("%4ld",z);
        }
        printf("\n");
    }
}
