#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10]="hello";
    char str2[10];
    char str3[10];
    strcpy(str3, strcpy(str2, str1));
    printf("%s %s",str2,str3);
    return 0;
}
