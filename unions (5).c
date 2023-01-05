#include <stdio.h>
enum Boot {False, True};
int main()
{
    enum Boot var;
    var=True;
    printf("%d", var);
    return 0;
}

