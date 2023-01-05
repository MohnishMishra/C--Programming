#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100];
    strcpy (str1, "welcome to ");
    strcpy (str2, "our c program");
    strcat (str1, str2);
    printf ("%s",str1);
    return 0;
}
