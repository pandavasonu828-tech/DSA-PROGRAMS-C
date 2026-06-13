// c programming to create a array using bubble sort

/*#include<stdio.h>

int main()
{
    int n,i,j,t;
    printf("enter the number of elements in array:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&a[i]);
    }
    printf("the array before sorting is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("\nafter sorting the array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

return 0;
}

*/


// bubble sort with out using another temporary variable

/*#include<stdio.h>

int main()
{
    int n,i,j;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nbefore sorting the array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j] += a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
        
            }
             
        }
    }
    printf("\nafter sorting the array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}

*/

// by using functoins write the code for bubble sorting by using another variable

/*#include<stdio.h>

int bsort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return 0;
}

int main()
{
    int n,i,res;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nthe unsorted array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    res = bsort(a,n);
    printf("the sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}


*/

//by using functoins write the code for bubble sorting by not using another variable
/*#include<stdio.h>

int bsort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j] = a[j]+a[j+1];
                a[j+1] = a[j]-a[j+1];
                a[j] = a[j] - a[j+1];
            }
        }
    }
    return 0;
}

int main()
{
    int n,i,res;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nthe unsorted array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    res = bsort(a,n);
    printf("the sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
    */


// by using bubble sorting technique print array in descending array
/*#include<stdio.h>

int main()
{
    int n,i,j,t;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array before sorting is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t");
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("\nthe array after sorting is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i] = a[i];
    }
    printf("the array in descending array is:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}

*/

// program to print descending array by using bubble sorting
#include<stdio.h>
int main()
{
    int n,i,j,t;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array before sorting is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("\nthe descending array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}