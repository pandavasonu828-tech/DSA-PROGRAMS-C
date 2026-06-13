// circular linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create()
{
    struct node *head = NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter value:\n");
        scanf("%d",&value);
        newnode->data=value;
        newnode->next = NULL;
        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;
            while(temp->next!=head)
            {
                temp = temp->next;
            }
            temp->next=newnode;
        }
        newnode -> next = head;
    }
    return head;
}
void display(struct node *head)
{
    struct node *temp=head;
    if(head == NULL)
    {
        printf("list is empty.\n");
        return;
    }
    printf("circular linked list is :\n");
    do
    {
        printf("%d->",temp->data);
        temp = temp->next;
    } while (temp!=head);
    printf("%d",head->data);
}
int main()
{
    struct node *head;
    head = create();
    display(head);
    return 0;
}*/

//inserting node at beginning of a cirrcular linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert_beg(struct node *head)
{
    struct node *newnode,*temp;
    int value;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter value to inserting node:\n");
    scanf("%d",&value);
    newnode->data = value;
    if(head == NULL)
    {
        newnode->next=newnode;
        head = newnode;
    }
    else
    {
        temp = head;
        while(temp->next!=head)
        {
            temp = temp->next;
        }
        newnode->next = head;
        temp->next=newnode;
        head=newnode;
    }
return head;
}
void display(struct node *head)
{
    struct node *temp=head;
    if(head == NULL)
    {
        printf("list is empty.\n");
        return;
    }
    printf("the circular list is:\n");
    do
    {
        printf("%d->",temp->data);
        temp = temp->next;
    } while (temp!=head);
    printf("%d",head->data);
}
int main()
{
    struct node *head=NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter value:\n");
        scanf("%d",&value);
        newnode -> data = value;
        newnode -> next = NULL;
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp = head;
            while(temp->next!=head)
            {
                temp = temp->next;
            }
            temp->next=newnode;
        }
        newnode->next=head;
    }
    head = insert_beg(head);
    display(head);
    return 0;
}*/

//displaying circular linked list before inserting a node and after inserting a node 

/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert_beg(struct node *head)
{
    struct node *newnode,*temp;
    int value;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter value to inserting the node at beginning:\n");
    scanf("%d",&value);
    newnode->data = value;
    if(head == NULL)
    {
        newnode -> next = newnode;
        head = newnode;
    }
    else
    {
        temp = head;
        while(temp->next!=head)
        {
            temp = temp->next;
        }
        newnode->next=head;
        temp->next = newnode;
        head = newnode;
    }
    return head;
}
void display(struct node *head)
{
    struct node *temp = head;
    if(head == NULL)
    {
        printf("list is empty.\n");
        return;
    }
    printf("circular linked list is :\n");
    do
    {
        printf("%d->",temp->data);
        temp=temp->next;
    } while (temp!=head);
    printf("%d",head->data);
}
int main()
{
    struct node *head = NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter value:\n");
        scanf("%d",&value);
        newnode->data = value;
        if(head==NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp = head;
            while(temp->next!=head)
            {
                temp = temp->next;
            }
            temp->next=newnode;
        }
        newnode->next=head;
    }
    printf("\nthe circular linked before insertig node is:\n");
    display(head);
    head = insert_beg(head);
    printf("\nthe circular linked after insertig node is:\n");
    display(head);
    return 0;
}
    */


// inserting a node at end
/*#include<stdio.h> 
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert_end(struct node *head)
{
    struct node *newnode,*temp;
    int value;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter value to inserting node at end:\n");
    scanf("%d",&value);
    newnode->data = value;
    if(head == NULL)
    {
        newnode -> next = newnode;
        head = newnode;
    }
    else
    {
        temp = head;
        while(temp->next!=head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next=head;
    }
    return head;
}
void display(struct node *head)
{
    struct node *temp = head;
    if(head == NULL)
    {
        printf("list is empty.\n");
        return;
    }
    printf("\nthe circular linked list.\n");
    do
    {
        printf("%d->",temp->data);
        temp = temp->next;
    } while (temp!=head);
    printf("%d",head->data);
}
int main()
{
    struct node *head = NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter value:\n");
        scanf("%d",&value);
        newnode->data = value;
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp = head;
            while(temp->next!=head)
            {
                temp = temp->next;
            }
            temp->next=newnode;
        }
        newnode->next=head;
    }
    head = insert_end(head);
    display(head);
    return 0;
}*/

// displaying circular linked list before inserting node at end and after inserting at end
/*#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *insert_end(struct node *head)
{
    struct node *newnode,*temp;
    int value;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter value to inserting at end:\n");
    scanf("%d",&value);
    newnode->data=value;
    if(head==NULL)
    {
        newnode->next=newnode;
        head = newnode;
    }
    else
    {
        temp = head;
        while(temp->next!=head)
        {
            temp = temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
    }
    return head;
}
void display(struct node *head)
{
    struct node *temp=head;
    if(head == NULL)
    {
        printf("list is empty.\n");
        return;
    }
    do
    {
        printf("%d->",temp->data);
        temp = temp->next;
    } while (temp!=head);
    printf("%d",head->data);
}
int main()
{
    struct node *head = NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value:\n");
        scanf("%d",&value);
        newnode->data=value;
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp = head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
        newnode->next=head;
    }
    printf("\ncircular list before inserting node:\n");
    display(head);
    head = insert_end(head);
    printf("\ncircular list after inserting node:\n");
    display(head);
    return 0;
}*/

// inserting node at specific position in circular linked list 
/*#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *insert_spec(struct node *head)
{
    struct node *newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    int value,pos,i;
    printf("enter value:\n");
    scanf("%d",&value);
    printf("enter positon:\n");
    scanf("%d",&pos);
    newnode->data=value;
    if(pos==1)
    {
        if(head==NULL)
        {
            newnode->next=newnode;
            head=newnode;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            newnode->next=head;
            temp->next=newnode;
            head=newnode;
        }
        return head;
    }
    temp=head;
    for(i=1;i<pos-1;i++)
    {
        if(temp->next!=head)
        {
            printf("invalid position.\n");
            return head;
        }
        temp = temp->next;
    }
    if(temp==NULL)
    {
        printf("invalid position.\n");
        return head;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return head;
}
void display(struct node *head)
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("list is empty.");
        return head;
    }
    printf("circular linked list:\n");
    do
    {
        printf("%d->",temp->data);
        temp=temp->next;
    } while (temp!=head);
    printf("%d",head->data);
}

int main()
{
    struct node *head=NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value:\n");
        scanf("%d",&value);
        newnode->data=value;
        if(head==NULL)
        {
            head = newnode;
            newnode->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=head;
        }
    }
    head=insert_spec(head);
    display(head);
    return 0;
}*/

// displaying circular linked list inserting node at specific position before inserting and after inserting
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert_spec(struct node *head)
{
    struct node *newnode,*temp;
    int pos,value,i;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter value:\n");
    scanf("%d",&value);
    printf("enter position:\n");
    scanf("%d",&pos);
    newnode->data=value;
    if(pos==1)
    {
        if(head==NULL)
        {
            newnode->next=newnode;
            head = newnode;
        }
        else
        {
            temp = head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            newnode->next=head;
            temp->next=newnode;
            head=newnode;
        }
        return head;
    }
    temp=head;
    for(i=1;i<pos-1;i++)
    {
        if(temp->next==head)
        {
            printf("invalid position.\n");
            return head;
        }
        temp = temp->next;
    }
    if(temp==NULL)
    {
        printf("invalid position.\n");
        return head;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return head;
}
void display(struct node *head)
{
    struct node *temp=head;
    if(head == NULL)
    {
        printf("list is empty.");
        return;
    }
    printf("\ncircular list is :\n");
    do
    {
        printf("%d->",temp->data);
        temp=temp->next;
    } while (temp!=head);
    printf("%d",head->data);
}
int main()
{
    struct node *head = NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter value:\n");
        scanf("%d",&value);
        newnode->data=value;
        if(head==NULL)
        {
            head = newnode;
            newnode->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp = temp->next;
            }
            temp->next=newnode;
            newnode->next=head;
        }
    }
    printf("\nlist before inserting node:\n");
    display(head);
    head=insert_spec(head);
    printf("\nlist after inserting node:\n");
    display(head);
    return 0;
}*/

// deleting node at beginning in a circular linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *delete_beg(struct node *head)
{
    struct node *temp,*last;
    if(head==NULL)
    {
        printf("list is empty.\n");
        return head;
    }
    if(head->next==head)
    {
        free(head);
        head=NULL;
        return head;
    }
    temp=head;
    last=head;
    while(last->next!=head)
    {
        last = last->next;
    }
    head=head->next;
    last->next=head;
    free(temp);
    return head;
}
void display(struct node *head)
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("\nlist is empty.\n");
        return;
    }
    printf("\ncircular list is:\n");
    do
    {
        printf("%d->",temp->data);
        temp=temp->next;
    } while (temp!=head);
    printf("%d",head->data);
}
int main()
{
    struct node *head=NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       newnode=(struct node*)malloc(sizeof(struct node)); 
       printf("enter value:\n");
       scanf("%d",&value);
       newnode->data=value;
       if(head==NULL)
       {
        head = newnode;
        newnode->next=head;
       }
       else
       {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
       }
    }
    head = delete_beg(head);
    display(head);
    return 0;
}
*/

// displaying circular linked list before deleting node at beginning and after deleting
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *delete_beg(struct node *head)
{
    struct node *temp,*last;
    if(head==NULL)
    {
        printf("list is empty.\n");
        return head;
    }
    if(head->next==head)
    {
        free(head);
        head=NULL;
        return head;
    }
    temp = head;
    last = head;
    while(last->next!=head)
    {
        last = last->next;
    }
    head = head->next;
    last->next=head;
    free(temp);
    return head;
}
void display(struct node *head)
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("list is empty.");
        return;
    }
    do
    {
        printf("%d->",temp->data);
        temp=temp->next;
    } while (temp!=head);
    printf("%d",head->data);
}
int main()
{
    struct node *head=NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value for node %d:\n",i+1);
        scanf("%d",&value);
        newnode->data=value;
        if(head==NULL)
        {
            head = newnode;
            newnode->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=head;
        }
    }
    printf("\nthe circular linked list before deleting node :\n");
    display(head);
    head = delete_beg(head);
    printf("\nthe circular linked list after deleting node :\n");
    display(head);
    return 0;
}*/

// deleting node at end in circular linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *delete_end(struct node *head)
{
    struct node *temp,*prev;
    if(head == NULL)
    {
        printf("list is empty.\n");
        return head;
    }
    if(head->next==head)
    {
        free(head);
        head=NULL;
        return head;
    }
    temp=head;
    while(temp->next!=head)
    {
        prev = temp;
        temp=temp->next;
    }
    prev->next=head;
    free(temp);
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
    do
    {
        printf("%d->",temp->data);
        temp=temp->next;
    } while (temp!=head);
    printf("%d",head->data);
}
int main()
{
    struct node *head=NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter value for node %d:\n",i+1);
        scanf("%d",&value);
        newnode->data = value;
        if(head == NULL)
        {
            head= newnode;
            newnode->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=head;
        }
    }
    head=delete_end(head);
    display(head);
    return 0;
}*/

// displaying circular linked list before deleting node at end and after deleting
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *delete_end(struct node *head)
{
    struct node *temp,*prev;
    if(head==NULL)
    {
        printf("list is emptry.\n");
        return head;
    }
    if(head->next==head)
    {
        free(head);
        head=NULL;
        return head;
    }
    temp = head;
    while(temp->next!=head)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=head;
    free(temp);
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
    do
    {
        printf("%d->",temp->data);
        temp=temp->next;
    } while (temp!=head);
    printf("%d",head->data);
}
int main()
{
    struct node *head = NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value:\n");
        scanf("%d",&value);
        newnode->data = value;
        if(head==NULL)
        {
            head = newnode;
            newnode->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=head;
        }
    }
    printf("\nthe list before deleting is:\n");
    display(head);
    head=delete_end(head);
    printf("\nthe list after deleting is:\n");
    display(head);
return 0;
}*/

// deleting a node at specific position in a circular linked list
/*#include<stdio.h>                                                               
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *delete_spec(struct node *head)
{
    struct node *temp,*prev,*last;
    int pos,i;
    if(head==NULL)
    {
        printf("list is empty.\n");
        return head;
    }
    printf("enter position:\n");
    scanf("%d",&pos);
    if(pos<=0)
    {
        printf("invalid position.\n");
        return head;
    }
    if(pos==1)
    {
        if(head->next==head)
        {
            free(head);
            head=NULL;
            return head;
        }
        temp=head;
        last=head;
        while(last->next!=head)
        {
            last = last->next;
        }
        head=head->next;
        last->next=head;
        free(temp);
        return head;
    }
    temp=head;
    prev=NULL;
    for(i=1;i<pos;i++)
    {
        prev=temp;
        temp=temp->next;
        if(temp==head)
        {
            printf("invalid position.");
            return head;
        }
    }
    prev->next=temp->next;
    free(temp);
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
    do
    {
        printf("%d->",temp->data);
        temp=temp->next;
    } while (temp!=head);
    printf("%d",head->data);
}
int main()
{
    struct node *head=NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value for node %d:\n",i+1);
        scanf("%d",&value);
        newnode->data = value;
        if(head==NULL)
        {
            head = newnode;
            newnode->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=head;
        }
    }
    head = delete_spec(head);
    display(head);
    return 0;
}*/

// displaying circular linked list before deleting node at specific position and after deleting a node
/*#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *delete_pos(struct node *head)
{
    struct node *prev,*temp,*last;
    int pos,i;
    if(head==NULL)
    {
        printf("list is empty.\n");
        return head;
    }
    printf("enter positon:\n");
    scanf("%d",&pos);
    if(pos<=0)
    {
        printf("invalid position.\n");
        return head;
    }
    if(pos==1)
    {
    if(head->next==head)
        {
            free(head);
            head=NULL;
            return head;
        }
        temp=head;
        last=head;
        while(last->next!=NULL)
        {
            last = last->next;
        }
        head=head->next;
        last->next=head;
        free(temp);
        return head;
    }
    temp=head;
    prev=NULL;
    for(i=1;i<pos;i++)
    {
        prev=temp;
        temp=temp->next;
        if(temp==head)
        {
            printf("invalid position.\n");
            return head;
        }
    }
    prev->next=temp->next;
    free(temp);
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
    do
    {
        printf("%d->",temp->data);
        temp=temp->next;
    } while (temp!=head);
    printf("%d",head->data);
}
int main()
{
    struct node *head=NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value for node %d:\n",i+1);
        scanf("%d",&value);
        newnode->data=value;
        if(head==NULL)
        {
            head=newnode;
            newnode->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=head;
        }
    }
    printf("\nlist before deleting node:\n");
    display(head);
    head=delete_pos(head);
    printf("\nlist after deleting node:\n");
    display(head);
    return 0;
}*/
