#include <stdio.h>
#include <conio.h>
main()
{
    int arr1[5],arr2[5],i,j;
    printf("\n Enter 5 elements of array: ");
    for (i=0;i<=4;i++)
        scanf("%d",&arr1[i]);
    for (i=0,j=4;i<=4;i++,j--)
        arr2[j]=arr1[i];
    printf("\n Enter elements in reverse order: \n");
    for (i=0;i<=4;i++)
        printf("\t %d",arr2[i]);

}
