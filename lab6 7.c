#include <stdio.h>
int main()
{
    char x, y;
    printf("enter two values for x and y =");
    scanf("%c %c", &x, &y);
    if (~(x==y))
        printf("\n result of ~(x==y) is 1");
    if (!(x==y))
        printf("\n result of !(x==y) is 1");
    return 0;

}
