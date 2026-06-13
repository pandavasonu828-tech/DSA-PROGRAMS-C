// creation of double circular linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *create()
{
    struct node *head=NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value to node%d:\n",i+1);
        scanf("%d",&value);
        newnode->data=value;
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
    }
    if(head!=NULL)
    {
        temp->next=head;
        head->prev=temp;
    }
    return head;
}
void display(struct node *head)
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("list is empty.\n");
        return;
    }
    printf("doubly circular linked list:\n");
    do
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }while(temp!=head);
    printf("%d",head->data);
}
int main()
{
    struct node *head;
    head=create();
    display(head);
    return 0;
}*/