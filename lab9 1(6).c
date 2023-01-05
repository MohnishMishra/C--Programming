#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
    int sum,avg;
    double stdev;
    function(&sum,&avg,&stdev);
    printf("\n sum=%d \n average=%d \n standard deviation=%lf",sum,avg,stdev);
}
function(int *sum,int *avg,double *stdev)
{
    int n1,n2,n3,n4,n5;
    printf("\n enter 5 numbers=");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    *sum=n1+n2+n3+n4+n5;
    *avg=*sum/5;
    *stdev=sqrt((pow((n1-*avg),2)+pow((n2-*avg),2)+pow((n3-*avg),2)+pow((n4-*avg),2)+pow((n5-*avg),2))/4);
}
