#include <stdio.h>
#include <conio.h>
main()
{
long int totpop=80000;
long int totmen,totlit,illitmen,litmen,totwomen,totlitwomen,illitwomen,litwomen;
totmen=(52.0/100.0)*totpop;
printf("total number of men in the town are= %ld",totmen);
totlit=(48.0/100.0)*totpop;
printf("\n total number of literate people is= %ld",totlit);
litmen=(35.0/100.0)*totpop;
printf("\n total number of literate men= %ld",litmen);
totlitwomen=totlit-litmen;
totwomen=totpop-totmen;
illitmen=totmen-litmen;
illitwomen=totwomen-litwomen;
printf("\n total number of women is= %ld",totwomen);
printf("\n total number of illiterate men is= %ld",illitmen);
printf("\n total number of illiterate women is= %ld", illitwomen);
}
