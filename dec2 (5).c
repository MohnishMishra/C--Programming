#include <stdio.h>
int main(void)
{
    int a=5;
    int *p;
    p=&a;
    printf("Value of p= Address of a = %p \n",p);
    printf("value of p= %p\n", ++p);
    printf("value of p= %p\n", p++);
    printf("value of p= %p\n", p);
    printf("value of p= %p\n", --p);
    printf("value of p= %p\n", p--);
    printf("value of p= %p\n", p);
    return 0;
}
