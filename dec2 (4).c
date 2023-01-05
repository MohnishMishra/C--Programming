#include <stdio.h>
int main(void)
{
    int a=5,*pi=&a;
    char b='x', *pc=&b;
    float c=5.5, *pf=&c;
    printf("value of pi = %p \n", pi);
    printf("value of pc = %p \n", pc);
    printf("value of pf = %p \n", pf);
    pi++;
    pc++;
    pf++;
    printf("now value of pi=%p \n", pi);
    printf("now value of pc=%p \n", pc);
    printf("now value of pf=%p \n", pf);
    return 0;
}
