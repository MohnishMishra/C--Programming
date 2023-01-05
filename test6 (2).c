#include<stdio.h>
int main()
{
int a[2][2],b[2][2],c[2][2];
int i,j,rows, columns, Sum = 0;;
printf("\nEnter value of matrix a\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nEnter value of matrix b\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\nValue of matrix a\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\nValue of matrix b\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("\nAfter addition resultant matrix is\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}

//2.Multiply two matrices
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{

c[i][j]=0;
for(int k=0;k<2;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
printf("\nAfter Multiplication resultant matrix is\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
//3.sum of diagonals
for(rows = 0; rows < i; rows++)
{
Sum = Sum + a[rows][rows];
}

printf("\n The Sum of Diagonal Elements of a Matrix = %d\n", Sum );
Sum=0;
for(rows = 0; rows < i; rows++)
{
Sum = Sum + b[rows][rows];
}

printf("\n The Sum of Diagonal Elements of a Matrix = %d\n", Sum );
}
