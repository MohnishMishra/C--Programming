#include <stdio.h>
#include <conio.h>
main()
{
    int c,sub;
    printf("enter the class and number of subjects failed: ");
    scanf("%d %d",&c,&sub);
    switch (c)
    {
    case 1:
        if (sub>=1 && sub<=3)
            printf("\n Student gets total of %d grace marks ", 5*sub);
        else
            if (sub>3)
                printf("\n No grace marks");
        break;
    case 2:
        if (sub>=1 && sub<=2)
            printf("\n Students gets total of %d grace marks", 4*sub);
        else
            if (sub>2)
                printf("\n No grace marks");
        break;
    case 3:
        if (sub==1)
            printf("\n student gets 5 grace marks");
        else
            if (sub>1)
                printf("\n no grace marks");
        break;
    default:
        printf("\n Wrong class entered");
    }
}
