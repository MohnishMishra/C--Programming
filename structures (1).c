#include <stdio.h>
struct
{
    char *engine;
}car1,car2;
int main()
{
    car1.engine="DDIS 190 Engine";
    car2.engine="1.2L Kappa Dual VTVT";
    printf("%s \n",car1.engine);
    printf("%s \n",car2.engine);
    return 0;
}
