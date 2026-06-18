// write a program using binary searching

#include<stdio.h>
int binarysearch(int arr[],int n,int target)
{
    int low=0,high=n-1,mid,i;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            low = mid+1;
        }
        else
        {
           high = mid-1; 
        }
    }
    return -1;
}

int main()
{
    int a[10],n,target,result;
    printf("enter number of elemets:\n");
    scanf("%d",&n);
    printf("\nenter %d sorted elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter element to search:\n");
    scanf("%d",&target);
    result = binarysearch(a,n,target);
    if(result == -1)
    {
        printf("element not found.");
    }
    else
    {
        printf("element found at position %d",result+1);
    }
    return 0;
}

