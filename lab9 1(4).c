#include <stdio.h>
#include <conio.h>
main()
{
int num;
printf("enter number=");
scanf("%d",&num);
prime(num);
}
prime(int num)
{
    int i=2;
    printf("prime factors of %d are", num);
    while (num!=1)
    {
        if (num%i==0)
            printf("%d",i);
        else
        {
            i++;
            continue;
        }
        num=num/i;
    }
}
