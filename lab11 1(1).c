#include <stdio.h>
void main()
{
    int n,a[10],i;
    printf("Enter the number of items=");
    scanf("%d", &n);
    printf("enter n elements=");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The N elements are=");
    for (i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}
