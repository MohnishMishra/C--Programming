#include <stdio.h>
int main()
{
    char s[6]="Hello";
    char t[6];
    int i;
    for (i=0;s[i]!='\0';i++)
    {
        t[i]=s[i];
    }
    printf("%s",t);
}
