#include <stdio.h>
int main()
{
int i,j,n;
printf("\n Enter The Number Of Rows =");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf("%4d",(i+j+1)%2);
printf("\n");
}
return 0;
}
