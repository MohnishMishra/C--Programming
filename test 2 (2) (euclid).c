#include <stdio.h>
int eval(int num1,int num2);
int main()
{
    int num1, num2, gcd;
    printf("enter the 2 numbers=");
    scanf("%d %d",&num1,&num2);
    gcd=eval(num1,num2);
    printf("\n The GCD of %d and %d is: %d\n ",num1,num2,gcd);
}
int eval(int a,int b)
{
    while (a!=b)
    {
        if(a>b)
            return eval(a-b,b);
        else
            return eval(a,b-a);
    }
    return a;
}
