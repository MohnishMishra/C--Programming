#include <stdio.h>
#include <conio.h>
main()
{
    int y,n=0;
    float i,x;
    for (x=5.5; x<=12.5; x+=0.5)
    {
        i=2+(y+ 0.5*x);
        printf("\n y=%d, x=%f i=%f",y,x,i);
        n++;
        if (n>=24)
        {
            printf("press any key to continue");
            n=0;
        }
    }
}
