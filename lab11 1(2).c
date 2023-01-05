#include <stdio.h>

void main()
{
    int n,i,sum=0;
    int a[10],average;
    printf("enter the number of elements= \n");
    scanf("%d",&n);
    printf("Enter N numbers=");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    average= sum/n;
    printf("Average= %d \n",average);
}
