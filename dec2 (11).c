#include <stdio.h>
int main (void)
{
    int *p;
    int (*ptr)[5];
    int arr[5];
    p=arr;
    ptr=&arr;
    printf("p=%p, ptr=%p\n",p,ptr);
    p++;
    ptr++;
    printf("p=%p,ptr=%p\n",p,ptr);
    return 0;
}
