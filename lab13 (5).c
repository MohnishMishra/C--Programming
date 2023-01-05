#include <stdio.h>
#include <conio.h>
main()
{
    int mat1[6][6], mat2[6][6], mat3[6][6],i,j;
    printf("Enter values for first 6x6 matrix: \n");
    for (i=0;i<=5;i++)
    {
        for (j=0;j<=5;j++)
            scanf("%d", &mat1[i][j]);
    }
    for (i=0;i<=5;i++)
    {
        for (j=0;j<=5;j++)
            scanf("%d",&mat2[i][j]);
    }
    //calculating sum
    printf("\n The new matrix after addition of the above two matrices is: \n");
    for (i=0;i<=5;i++)
    {
        for (j=0;j<=5;j++)
            printf("%d \t", mat3[i][j]);
        printf("\n");
    }
}
