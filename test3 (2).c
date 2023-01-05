#include <stdio.h>
int fibo(int num);
int main()
{
    int num,c=0,i;
    num=50;
    printf("the series is = \n");
    for (i=0;i<num;i++)
    {
        printf("%d \n",fibo(i));
    }
}
int fibo(int num)
{
    if (num==0)
        return 0;
    else if(num==1)
        return 1;
    else
        return (fibo(num-1)+fibo(num-2));
}
