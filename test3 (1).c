#include <stdio.h>
void main()
{
    int n,a[10],i,ar;
    printf("Enter the number of items that you wish to enter=");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    modify(a);
    printf("the new array is ");
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
int modify(int a[])
{
    int i,n=10;
    for (i=0;i<n;i++)
    {
        a[i]=a[i]*3;
    }
    return a;
}
