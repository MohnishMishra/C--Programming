#include <stdio.h>

double find_sum_average(double a[], int n)
{
    double psum,nsum;
    int i;
    psum=nsum=0;
    for (i=0;i<n;i++)
    {
        if (a[i]>=0)
            psum=psum+a[i];
        else
            nsum=nsum+a[i];
    }
    printf("sum of positive numbers= %f \n",psum);
    printf("sum of negative numbers= %f \n",nsum);
    return ((psum+nsum)/n);
}
void main()
{
    int n,i;
    double a[10],average;
    printf("enter the number of items= \n");
    scanf("%d",&n);
    printf("Enter N elements=");
    for (i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
    }
    average = find_sum_average(a,n);
    printf("average of all numbers= %lf",average);
}
