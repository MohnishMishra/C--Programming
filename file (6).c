#include <stdio.h>
int main()
{
    FILE *fptr=fopen("Output.txt","w");
    char *str= "C programming language";
    if (fptr==NULL)
        printf("could not open file");
    fputs(str, fptr);
    fclose(fptr);
    fptr= fopen("Output.txt","r");
    char str1[100];
    fgets(str1, 100, fptr);
    fclose (fptr);
    printf("%s", str1);
    return 0;
}
