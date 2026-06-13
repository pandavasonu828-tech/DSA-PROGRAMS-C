// sorting elements using quick sort
#include<stdio.h>

void swap(int*a,int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[],int low,int high)
{
    int pivot = arr[high], i = low-1, j;
    for(j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    } 
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int pi = partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
}

int main()
{
    int n,i;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("\nenter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nthe unsorted array :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    quicksort(a,0,n-1);
    printf("\nsorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}