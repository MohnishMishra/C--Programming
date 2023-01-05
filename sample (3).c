#include <stdio.h>

int main()
{
    int first, second, *p, *q, sum;
    printf("Enter two integers to add: \t");
    scanf("%d %d", &first, &second);
    p = &first;
    q = &second;
    sum = *p + *q;
    printf("\n Sum of entered numbers = %d \n",sum);
    return 0;
}
