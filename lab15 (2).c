#include <stdio.h>
int main()
{
    int a[50],i,n,sum=0;
    printf("Enter how many numbers= ");
    scanf("%d",&n);
    printf("\n Enter values for the array= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
        sum=sum+a[i];
    printf("\n The sum of the elements stored in array a is %d", sum);
}
