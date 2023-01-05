// bubble sort using pointers

void sort(int n, int *p)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
        {
        for (j = i + 1; j < n; j++)
        {
            if (*(p + j) < *(p + i))
            {
                temp = *(p+ i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", *(p + i));
}

int main()
{
    int n,arr[100],i;
    printf("Enter the number of elements you wish to enter= ");
    scanf("%d",&n);
    printf("Enter the numbers to be sorted= ");
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(n, arr);
}
