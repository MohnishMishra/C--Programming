#include <stdio.h>
#include <stdlib.h>
int *input()
{
    int *ptr,i;
    ptr=(int*)malloc(5*sizeof(int));
    printf("enter 5 numbers: ");
    for (i=0;i<5;i++)
        scanf("%d",ptr+i);
    return ptr;
}
int main()
{
    int i,sum=0;
    int *ptr=input();
    for (i=0;i<5;i++)
        sum+=*(ptr+i);
    printf("Sum is: %d", sum);
    free(ptr);
    ptr=NULL;
    return 0;
}