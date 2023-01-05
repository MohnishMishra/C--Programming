#include <stdio.h>
int main()
{
    int a[50],i,n,large=0;
    printf("\n Enter how many numbers= ");
    scanf("%d",&n);
    printf("\n Enter the values for the array= ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]>large)
            large=a[i];
    }
    printf("the largest element stored in array a is %d",large);
}
