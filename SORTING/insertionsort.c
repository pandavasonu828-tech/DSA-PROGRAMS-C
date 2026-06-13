// sorting an array using insertiion sorting

/*
#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nthe array before sorting is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i = 1; i < n; i++)
    {
        for(j = i; j > 0; j--)
        {
            if(a[j] < a[j - 1])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
            else
            {
                break;  // stop if already in correct position
            }
        }
    }
    printf("\nthe array after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}
    */


// by using while loop

/*#include<stdio.h>
int main()
{
    int n,i,j,key;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\narray before sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=1;i<n;i++)
    {
        key = a[i];
        j = i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    printf("\narray after sorting:\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int n,i,j,t;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array before sorting :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=1;i<n;i++)
    {
        t = a[i];
        j =i-1;
        while(j>=0&&a[j]>t)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
    }
    printf("\nthe ascending order array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i] = a[i];
    }
    printf("the descending array is :\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",b[i]);
    }
    return 0;

}
*/

#include<stdio.h>
int main()
{
    int n,i,j,t;
    printf("enter number of elements :\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array before sorting :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=1;i<n;i++)
    {
        t = a[i];
        j=i-1;
        while(j>=0&&a[j]<t)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
    }
    printf("the descending array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}