#include <stdio.h>
int main()
{
    FILE *fp= fopen("Output.txt", "r");
    char str [100];
    fseek (fp, -5, SEEK_END);
    fscanf(fp, "%s", str);
    printf("%s", str);
    return 0;
}
