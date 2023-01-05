#include <stdio.h>
void Fibonacci (int a[],int n)
{
    int i;
    a[0]=0;
    a[1]=1;
    for (i=2;i<n;i++)
    {
        a[i]=a[i-1]=a[i-2];
    }
}
int main()
{
    int n,i,a[100];
    printf("enter the value for n \n");
    scanf("%d",&n);
    Fibonacci (a,n);
    printf("Fibonacci numbers are \n");
    for (i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
}
