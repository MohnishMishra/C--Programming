#include <stdio.h>
int main()
{
    FILE *fptr= fopen("Input.txt","r");
    char ch;
    while (1)
    {
        ch=fgetc(fptr);
        if (ch==EOF)
            break;
        printf("%c",ch);
    }
    fclose (fptr);
    return 0;
}
