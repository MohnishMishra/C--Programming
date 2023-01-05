#include <stdio.h>
struct point
{
    int x,y;
};
int main()
{
    struct point p;
    FILE *fptr=fopen("important.bin", "wb");
    int i;
    for (i=0; i<10; i++)
    {
        p.x=i;
        p.y=i+1;
        fwrite (&p, sizeof(struct point), 1, fptr);
    }
    fclose (fptr);
}
