#include <stdio.h>
#include <string.h>
int main()
{
    char str1[5], str2[100];
    strcpy (str1, "he");
    strcpy (str2, "llo");
    strncat (str1, str2, sizeof(str1)-strlen(str1)-1);
    printf("%s",str1);
}
