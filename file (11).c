#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("hello.txt", "r");
    if (fp==NULL)
    {
        perror("error message");
        exit (EXIT_FAILURE);
    }
    else
    {
        fclose (fp);
        exit (EXIT_SUCCESS);
    }
    return 0;
}
