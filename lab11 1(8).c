#include <stdio.h>
#include<math.h>
double evalute(double a[],int n,double x)
{
int i,sum=0;
for(i=0;i<=n;i++)
{
 sum=sum+(a[i]*pow(x,i));
}
return sum;
}
main()
{
int n,i;
double a[30],x,res;
printf("Enter the value of n\n");
scanf("%d",&n);
printf("Enter n+1 values\n",n);
for(i=0;i<=n;i++)
{
scanf("%lf",&a[i]);
}
 printf("Enter value for x\n");
 scanf("%lf",&x);
res=evalute(a,n,x);
printf("Result=%lf\n",res);
}
