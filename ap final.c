#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000],string[1000],new_str[1000];
    int i,m=0;
    printf("Enter the string: ");
    gets(string);
    for(int i = 0; i < strlen(string); i++)
        {
        if(string[i] == ' ')
            string[i] = s[m];
            m=m+1;
        }
}
void replaceSubstring(char string[],char sub[],char new_str[])
{
    int stringLen,subLen,newLen;
    int i=0,j,k;
    int flag=0,start,end;
    stringLen=strlen(string);
    subLen=strlen(sub);
    newLen=strlen(new_str);

    for(i=0;i<stringLen;i++)
    {
flag=0;
start=i;
for(j=0;string[i]==sub[j];j++,i++)
if(j==subLen-1)
flag=1;
end=i;
if(flag==0)
i-=j;
else
{
for(j=start;j<end;j++)
{
for(k=start;k<stringLen;k++)
string[k]=string[k+1];
stringLen--;
i--;
}

for(j=start;j<start+newLen;j++)
{
for(k=stringLen;k>=j;k--)
string[k+1]=string[k];
string[j]=new_str[j-start];
stringLen++;
i++;
}
}
}
}
