#include <stdio.h>
#include <conio.h>
main()
{
    int arr[10],i,j;
    printf("\n Enter 10 elements of array: \n");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<=9;i++)
    {
        if (arr[i] == arr[10-(i+1)])
            printf("\n %d", arr[i]);
    }
}
