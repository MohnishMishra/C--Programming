#include <stdio.h>
int main()
{
    int a[10],x=0,sum=0,i,temp=0,j,small=0;
    printf("Enter the elements into the array=");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The contents of the array are=");
    for (i=0;i<=9;i++)
    {
        printf("%d \t",a[i]);    // display the content
    }
    //to find sum
    for (i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    printf("\n The sum of the elements of the array is= %d", sum);

    // to find the largest element

    for ( i = 0; i <= 9; i++)
    {
        if (x< a[i])
        {
            x = a[i];
        }
    }
    printf("\n Largest element = %d", x);

    // ascending order
    for ( i = 0; i <=9; i++)
        {
        for ( j = i+1; j <=9; j++)
        {
           if(a[i] > a[j])
           {
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
        }
    }

    printf("\n");
    printf("Elements of array sorted in ascending order: \n");
    for ( i = 0; i <=9; i++)
        {
        printf("%d ", a[i]);
        }
   //descending
   for ( i = 0; i <=9; i++)
    {
        for ( j = i+1; j <=9; j++)
         {
           if(a[i] < a[j])
           {
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
        }
    }

    printf("\n");

    //Displaying elements
    printf("Elements of array sorted in descendig order: \n");
    for (int i = 0; i <=9; i++)
    {
        printf("%d ", a[i]);
    }

    //smallest
    small=a[0];
    for(i=0;i<=9;i++)
    {
        if (small>a[i])
            small=a[i];
    }
    printf("\n the smallest number is = %d",small);

}
