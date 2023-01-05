#include <stdio.h>
int main(void)
{
    int i=0;
    int arr[5]={5,10,15,20,25};
    for (i=0;i<5;i++)
    {
        printf("value of arr[%d]=",i);
        printf("%d\t",arr[i]);
        printf("%d\t",*(arr+i));
        printf("%d\t", *(i+arr));
        printf("%d\n", i[arr]);
        printf("address of arr[%d]=%p\n",i,&arr[i]);
    }
    return 0;
}


