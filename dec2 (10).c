#include <stdio.h>
int main(void)
{
    int i,*p;
    int arr[5]={5,10,15,20,25};
    p=arr;
    for (i=0;i<5;i++)
    {
        printf("address of arr[%d]=%p %p %p %p\n",i,&arr[i],arr+i,p+i,&p[i]);
        printf("value of arr[%d]= %d %d %d %d\n",i,arr[i],*(arr+i), *(p+i),p[i]);
    }
    return 0;
}


