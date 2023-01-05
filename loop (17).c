#include <stdio.h>
#include <conio.h>
main()
{
    int i,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (i=0;i<=10;i++)
        printf("\n %d * %d = %d",num,i,num*i);
}
