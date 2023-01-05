#include <stdio.h>
int main(void)
{
    int a=5;
    int *pa;
    int **ppa;
    pa=&a;
    ppa=&pa;
    printf("Address of a= %p\n", &a);
    printf("Value of pa= address of a= %p\n", pa);
    printf("Value of *pa= value of a=%d\n", *pa);
    printf("address of pa= %p\n",&pa);
    printf("value of ppa= address of pa = %p\n", ppa);
    printf("value of *ppa= value of pa= %p\n", *ppa);
    printf("value of **ppa= value of a=%d\n",**ppa);
    printf("Address of ppa= %p\n", &ppa);
    return 0;

}
