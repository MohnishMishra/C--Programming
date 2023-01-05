#include <stdio.h>
#include <conio.h>
main()
{
    int r,s,a,young;
    printf("\n Enter age of Ram, Shyam and Ajay: ");
    scanf("%d %d %d",&r,&s,&a);
        if (r<s)
        {
            if (r<a)
                young =r;
            else
                young =a;
        }
        else
        {
            if (s<a)
                young =s;
            else
                young =a;
        }
        printf("the youngest of the 3 is aged %d",young);
}
