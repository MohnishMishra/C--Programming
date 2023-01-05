#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[25],i,pos=0,neg=0,zer=0, even=0, odd=0;
	int n;
	printf("enter the number of elements to be entered=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a number : ");
		scanf("%d", &arr[i]);
	}
	for(i=0;i<25;i++)
	{
		if(arr[i]>0)
			pos++;
		if(arr[i]<0)
			neg++;
		if(arr[i]==0)
			zer++;

		if(arr[i]%2==0)
		   even++;
		 else
		    odd++;
	}
	printf("\n\nData contain %d positive, %d negative, %d zeroes, %d even and %d odd numbers",pos,neg,zer, even, odd);
	getch();
	return 0;
}
