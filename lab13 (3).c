#include <stdio.h>
#include <conio.h>
main()
{
    static int a[5][5]={ {11,1,7,9,7},{13,54,56,2,5},{23,43,89,22,13},{14,15,17,16,19},{45,3,6,8,10} };
    int i,j,big;
    big=a[0][0];
    printf("\n The 5x5 matrix is:\n");
    for (i=0;i<=4;i++)
    {
        for (j=0;j<=4;j++)
        {
            printf("%d \t", a[i][j]);
            if (a[i][j]>big)
                big = a[i][j];
        }
        printf("\n");
    }
    printf("\n Largest number in the matrix is %d",big);
}
