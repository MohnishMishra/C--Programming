#include <stdio.h>
int main ()
{
    FILE *fptr=fopen("output.txt","w");
    int i;
    char str[]= "C programming language";
    if (fptr==NULL)
        printf("Error!");
    fputs (str,fptr);
    fclose (fptr);
    return 0;
}
