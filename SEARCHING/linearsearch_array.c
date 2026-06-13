// write  a c program to search an element using linear searching
/*#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,key,found=0;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to search:\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("element found at position %d\n",i+1);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("element not found in array.\n");
    }
    return 0;
}
    */


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,key,found=0;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to search:\n");
    scanf("%d",&key);
    for(i=n;i>=0;i--)
    {
        if(a[i]==key)
        {
            printf("element found at position %d\n",i+1);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("element not found in array.\n");
    }
    return 0;
}
