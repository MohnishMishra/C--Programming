#include <stdio.h>
int largest (int a[], int n)
{
    int i,pos;
    pos=0;
    for (i=1;i<n;i++)
    {
        if (a[i]>a[pos])
            pos=i;
    }
    return pos;
}
void main()
{
    int a[10],n,i,pos;
    printf("\n Enter the number of elements = ",n);
    scanf("%d",&n);
    printf("Enter %d elements \n",n);
    for (i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    pos = largest (a,n);
    printf("\n largest = %d",a[pos]);
    printf("\n position = %d",pos +1);
}
