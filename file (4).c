#include <stdio.h>
int main()
{
    FILE *fptr;
    char  str[100];
    fptr=fopen("Input.txt","r");
    if (fptr==NULL)
        printf("Error!");
    fscanf(fptr, "%s", str);
    printf("%s", str);
    fclose (fptr);
}
