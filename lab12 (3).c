#include<stdio.h>
#include<conio.h>
#define MAX 5

void selection(int*);
void bubble(int*);
void insertion(int*);
void swap(int*, int*);
void show(int*);

int main()
{
	int a[MAX] = { 5,1,4,2,7 }, b[MAX] = { 5, 2, 3, 9, 0 }, c[MAX] = {6, 23,1, 6, 2};
	printf("\nSelection sort.");
	selection(a);
	show(a);
	printf("\nBubble sort.");
	bubble(b);
	show(b);
	printf("\nInsertion sort.");
	insertion(c);
	show(c);
	_getch();
	return 0;
}
void selection(int *a)
{
	int i, j;
	for (i = 0; i < MAX; i++)
		for (j = i + 1; j < MAX; j++)
			if (a[i] > a[j])
				swap(&a[i], &a[j]);
}
void bubble(int *a)
{
	int i, j;
	for (i = 0; i < MAX; i++)
		for (j = 0; j < MAX - 1; j++)
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
}
void insertion(int *a)
{
	int key, arr[25], j, k;
	for (int i = 1; i < MAX; i++)
	{
		key = arr[i];
		for (j = 0; arr[j] < key; j++);
		for (k = i; k > j; k--)
			arr[k] = arr[k - 1];
		arr[j] = key;
	}
}
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void show(int *a)
{
	int i;
	printf("\n");
	for (i = 0; i < MAX; i++)
		printf("%d\t", a[i]);
	printf("\n");
}
