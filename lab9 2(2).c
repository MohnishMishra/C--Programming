#include <stdio.h>
#include <conio.h>
main()
{
  int num;
  printf("enter a number=");
  scanf("%d",&num);
  printf("prime factors are=");
  factor(num);
}
factor (int n)
{
    static int i=2;
    if (i<=n)
    {
        if (n%i==0)
        {
            printf("%d",i);
            n=n/i;
        }
        else
            i++;
        factor (n);
    }
    return;
}
