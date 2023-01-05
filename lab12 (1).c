#include <stdio.h>
#include <conio.h>
int main()
{
    int n, a[25],x,count=0;
    int i;
    printf("Enter the numbers of elements to be entered into the array (max 25) \n");
    scanf("%d",&n);
    printf("\n proceed to enter the numbers into the array=");
    for (i=0;i<n;i++)
    {
        scanf("&d",&a[i]);
    }
   printf("\n enter the number to searched=");
   scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if (x==a[i])
        {
            count=count+ 1;
        }
        else
        {
            continue;
        }
    }
    return count;
    printf("The number of times % appeared in the array is %d",x,count);
}
