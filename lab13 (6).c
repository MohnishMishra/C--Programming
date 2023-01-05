#include <stdio.h>
#include <conio.h>
main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3],i,j,k,sum;
    printf("\n Enter values for first 3x3 matrix: \n");
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
            scanf("%d",&mat1[i][j]);
    }
    printf("\n Enter values for second matrix: \n");
    for(i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
            printf("%d",&mat2[i][j]);
        printf("\n");
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum=0;
            for(k=0;k<=2;k++)
                sum = sum + mat1[i][j]*mat2[k][j];
            mat3[i][j]=sum;
        }
    }
    printf("The product matrix is: \n");
    for(i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            printf("%d \t", mat3[i][j]);
        }
        printf("\n");
    }

}
