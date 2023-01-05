#include <stdio.h>

int main ()
{
float var1 =3.1415956234512562;

double var2 =3.1415956234512562;

long double var3 =3.141595623451252156321;

printf("%d \n", sizeof(float));
printf("%d \n", sizeof (double));
printf("%d \n", sizeof (long double));

printf("% .16f \n", var1);
printf("% .16lf \n", var2);
printf("% .21Lf \n", var3);
}
