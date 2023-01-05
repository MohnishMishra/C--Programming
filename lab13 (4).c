#include <stdio.h>
#include <conio.h>
main()
{
    int mat[4][4],i,j,temp;
    printf("\n Enter the values for 4x4 matrix: \n");
    for (i=0;i<=3;i++)
    {
        for (j=0;j<=3;j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i=0;i<=3;i++)
    {
        for(j=i+1;j<=3;j++)
        {
            temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
    printf("\n The transpose of the matrix is = \n");
    for (i=0;i<=3;i++)
    {
        for (j=0;j<=3;j++)
            printf("%d \t",mat[i][j]);
        printf("\n");
    }
}
