// sorting an array in ascending order using selection sorting

/*#include<stdio.h>
int main()
{
    int n,i,j,t,min_index;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nthe array before sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min_index = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index = j;
            }
        }
        t = a[i];
        a[i] = a[min_index];
        a[min_index] = t;
    }
    printf("\nthe array after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}

*/

// with out using extra variable

/*#include<stdio.h>
int main()
{
    int n,i,j,min_index;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nthe array before sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min_index = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index = j;
            }
        }
       
        if(min_index != i)
        {
            a[i] = a[i] + a[min_index];
            a[min_index] = a[i] - a[min_index];
            a[i] =  a[i] - a[min_index];
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


/*
#include<stdio.h>
int main()
{
    int n,i,t,j,min;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    int a[n],b[n];
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
    for(i=0;i<n-1;i++)
    {
        min = i;
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j] < a[min])
                {
                   min = j; 
                }
            }
        }
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
    printf("\nthe array after sorting is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i] = a[i];
    }
    printf("the array in descending array :\n");
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
    int n,i,j,t,max;
    printf("enter the number of elements:\n");
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
    for(i=0;i<n-1;i++)
    {
        max = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[max])
            {
                max = j;
            }
            
        }
        t = a[i];
        a[i] = a[max];
        a[max] = t;
    }
    printf("the descending array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}