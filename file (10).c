#include <stdio.h>
#include <errno.h>
int main()
{
    FILE *fp;
    fp=fopen("hello.txt", "r");
    printf("The Value of error: %d \n", errno);
    return 0;
}
