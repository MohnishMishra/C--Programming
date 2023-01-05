#include <stdio.h>
#define ops 4
float sum(float a, float b){return (a+b);}
float sub(float a, float b){return (a-b);}
float mult (float a, float b){return (a*b);}
float divi (float a, float b){return (a/b);}
int main()
{
    float (*ptr2func[ops])(float,float)={sum,sub,mult,divi};
    int choice;
    float a,b;
    printf("Enter your choice: 0 for sum, 1 for sub, 2 for multi, 3 for divi: \t ");
    scanf("%d",&choice);
    printf("\n Enter the two numbers: \t");
    scanf("%f %f",&a,&b);
    printf("%f",ptr2func[choice](a,b));
    return 0;
}
