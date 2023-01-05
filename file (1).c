#include <stdio.h>
int main()
{
    FILE *fptr = fopen ("Output.txt","w");
    int i;
    char str[]= "C programming language";
    if (fptr==NULL)
        printf("Error!");
    for (i=0;str[i]!='\0';i++)
        fputc(str[i],fptr);
    fclose (fptr);
    return 0;
}
