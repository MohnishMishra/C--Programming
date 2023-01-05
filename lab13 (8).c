#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
    int a[3][3],i,j,k,sum,p;
    printf("\n Enter values for a 3x3 matrix: \n");
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n Enter values for a 3x3 matrix: \n");
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
            printf("%d \t", a[i][j]);
        printf("\n");
    }
    sum=0;
    j=1;
    k=2;
    for(i=0;i<=2;i++)
    {
        p=pow(-1,1);
        if (i==2)
            k=1;
        sum=sum+(a[0][i]*(a[1][j]*a[2][k] -a[2][j]*a[1][k]))*p;
        j=0;
    }
    printf("\n Determinant of the above matrix is: %d",sum);
}
