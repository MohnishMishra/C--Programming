#include <stdio.h>
int main()
{
    int *ptr;
    printf("%d \n",sizeof(NULL));
    ptr=(int*)malloc(2*sizeof(int));
    if (ptr==NULL)
        printf("memory could be allocated");
    else
        printf("memory allocated successfully");
    return 0;
}
