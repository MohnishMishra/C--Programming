#include <stdio.h>
#include <conio.h>
main()
{
    int pos,neg,zero,num;
    char ans='y';
    pos=neg=zero=0;
    while (ans == 'y' || ans == 'Y')
    {
        printf("\n Enter a number: ");
        scanf("%d", &num);
        if (num==0)
            zero ++;
        if (num>0)
            pos++;
        if (num<0)
            neg++;
        fflush (stdin);
        printf("Do you want to continue? ");
        scanf("%c",&ans);
    }
    printf("\n you entered %d positive numbers %d negative and %d zero(s)",pos,neg,zero);
}
