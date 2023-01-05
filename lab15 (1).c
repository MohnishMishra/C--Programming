#include <stdio.h>
int main()
{
    int a[50],i,n;
    printf("\n Enter how many numbers= ");
    scanf("%d",&n);
    printf("\n Enter values into the array= ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n The elements are= ");
    for (i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}
