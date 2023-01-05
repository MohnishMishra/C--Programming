#include <stdio.h>
#include <conio.h>
main()
{
   float avg,per;
   int m1,m2,m3;
   void result(int m1,int m2,int m3,float *a,float *p);
   printf("marks of three subjects=");
   scanf("%d %d %d",&m1,&m2,&m3);
   result(m1,m2,m3,&avg,&per);
   printf("\n average=%f \n percentage=%f",avg,per);
}
void result (int m1,int m2,int m3,float *a,float *p)
{
    *p=*a=(m1+m2+m3)/3.0;
}
