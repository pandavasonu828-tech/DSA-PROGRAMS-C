// double linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void display(struct node *head)
{
    struct node *temp = head;
    if(head==NULL)
    {
        printf("list is empty.\n");
        return;
    }
    printf("\nthe double linked list:\n");
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
struct node *create()
{
    struct node *head = NULL,*temp,*newnode;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter value:\n");
        scanf("%d",&value);
        newnode->data=value;
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
    return head;
}
int main()
{
    struct node *head;
    head = create();
    display(head);
}*/

// inserting node at beginning in double linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *insert_beg(struct node *head)
{
    struct node *newnode;
    int value;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter value in inserting node:\n");
    scanf("%d",&value);
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
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
    printf("double linked list.\n");
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
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
        newnode->prev=NULL;
        newnode->next=NULL;
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
    head=insert_beg(head);
    display(head);
    return 0;
}*/

//display double linked list before inserting node at beginnig and after inserting node
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *insert_beg(struct node *head)
{
    struct node *newnode;
    int value;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter value in inserting node:\n");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
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
    printf("\ndouble linked list is:\n");
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
int main()
{
    struct node *head=NULL,*newnode,*temp;
    int  n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value for node %d:\n",i+1);
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
    printf("\nlist before inserting node :\n");
    display(head);
    head=insert_beg(head);
    printf("\nlist after inserting node :\n");
    display(head);
    return 0;
}*/

// inserting node at end of the double linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *insert_end(struct node *head)
{
    struct node *newnode,*temp;
    int value;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter value in inserting node:\n");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head ==NULL)
    {
        head=newnode;
        return head;
    }
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    return head;
}
void display(struct node *head)
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("llist is empty.\n");
        return;
    }
    printf("double linked list is :\n");
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
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
        printf("enter value to node %d:\n",i+1);
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
    head=insert_end(head);
    display(head);
    return 0;
}*/
// displaying linked list before inserting node at end and after insertng
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *insert_end(struct node *head)
{
    struct node *newnode,*temp;
    int value;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter value to inserting node:\n");
    scanf("%d",&value);
    newnode->next=NULL;
    newnode->prev=NULL;
    newnode->data=value;
    if(head==NULL)
    {
        head = newnode;
        return head;
    }
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
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
    printf("\ndouble linked list is:\n");
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
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
    printf("list before inserting node:\n");
    display(head);
    head=insert_end(head);
    printf("list after inserting node:\n");
    display(head);
    return 0;
}
*/

//inserting node at specific positiion in double linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *insert_spec(struct node *head)
{
    struct node *newnode,*temp;
    int pos,i,value;
    printf("enter position:\n");
    scanf("%d",&pos);
    if(pos<=0)
    {
        printf("invalid position.\n");
        return head;
    }
    printf("enter value:\n");
    scanf("%d",&value);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(pos==1)
    {
        newnode->next=head;
        if(head!=NULL)
        {
            head->prev=newnode;
        }
        head=newnode;
        return head;
    }
    temp=head;
    for(i=1;i<pos-1&&temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("position out of range.\n");
        return head;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    if(temp->next!=NULL)
    {
        temp->next->prev=newnode;
    }
    temp->next=newnode;
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
    printf("double linked list is :\n");
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
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
    head=insert_spec(head);
    display(head);
    return 0;
}
*/

// displaying double linked list before inserting node at specific position and after inserting 
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *insert_spec(struct node *head)
{
    struct node *newnode,*temp;
    int pos,value,i;
    printf("enter position:\n");
    scanf("%d",&pos);
    if(pos<=0)
    {
        printf("invalid position.\n");
        return head;
    }
    printf("enter valiue:\n");
    scanf("%d",&value);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(pos==1)
    {
        newnode->next=head;
        if(head!=NULL)
        {
            head->prev=newnode;
        }
        head=newnode;
        return head;
    }
    temp=head;
    for(i=0;i<pos&&temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("position out of range.\n");
        return head;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    while(temp->next!=NULL)
    {
        temp->next->prev=newnode;
    }
    temp->next=newnode;
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
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
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
    printf("\nlist before inserting node at specific position:\n");
    display(head);
    head=insert_spec(head);
    printf("\nlist after inserting node at specific position:\n");
    display(head);
    return 0;
}
*/

// deleting a node at beginning in double linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *del_beg(struct node *head)
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty.\n");
        return head;
    }
    temp=head;
    head=head->next;
    if(head!=NULL)
    {
        head->prev=NULL;
    }
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
    printf("\ndouble linked list:\n");
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
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
        printf("enter value for node %d:",i+1);
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
    head=del_beg(head);
    display(head);
    return 0;
}
*/

// displaying double linked list before deleting node at beginning and after deleting node at beginning
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *del_beg(struct node *head)
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty.\n");
        return head;
    }
    temp=head;
    head=head->next;
    if(head!=NULL)
    {
        head->prev=NULL;
    }
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
    printf("\ndouble linked list is:\n");
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
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
        printf("enter data for node %d:\n",i+1);
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
    printf("\nlist before deleting node at beginning:\n");
    display(head);
    head=del_beg(head);
    printf("\nlist after deleting node at beginning:\n");
    display(head);
    return 0;
}*/

// deleting node at end in double linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *del_end(struct node *head)
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty.");
        return head;
    }
    if(head->next==NULL)
    {
        free(head);
        return NULL;
    }
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->prev->next=NULL;
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
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
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
    head=del_end(head);
    display(head);
    return 0;
}
*/

// displaying linked list before deleting node at end and after deleting at end
/*#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *del_end(struct node *head)
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty.");
        return head;
    }
    if(head->next==NULL)
    {
        free(head);
        return NULL;
    }
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->prev->next=NULL;
    free(temp);
    return head;
}
void display(struct node *head)
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("list is empty");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }    
    printf("NULL");
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
    printf("\nlist before deleting node:\n");
    display(head);
    head=del_end(head);
    printf("\nlist after deleting node:\n");
    display(head);
    return 0;
}
*/


//  deleting node at specific position in double linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *del_spec(struct node *head)
{
    struct node *temp;
    int pos,i;
    printf("enter position :\n");
    scanf("%d",&pos);
    if(pos<=0)
    {
        printf("invalid position.\n");
        return head;
    }
    temp=head;
    if(pos==1)
    {
        head=head->next;
        if(head!=NULL)
        {
            head->prev=NULL;
        }
        free(temp);
        return head;
    }
    for(i=1;i<pos&&temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("positon out of range.\n");
        return head;
    }
    if(temp->prev!=NULL)
    {
        temp->prev->next=temp->next;
    }
    if(temp->next!=NULL)
    {
        temp->next->prev=temp->prev;
    }
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
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
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
        printf("enter value to node %d:\n",i+1);
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
    head=del_spec(head);
    display(head);
    return 0;
}*/

// displaying linked list before deleting node at specific position and after deleting it
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *del_spec(struct node *head)
{
    struct node *temp;
    int pos,i;
    printf("enter position:\n");
    scanf("%d",&pos);
    if(pos<=0)
    {
        printf("invalid position.\n");
        return head;
    }
    temp=head;
    if(pos==1)
    {
        head=head->next;
        if(head!=NULL)
        {
            head->prev=NULL;
        }
        free(temp);
        return head;
    }
    for(i=1;i<pos&&temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("position out of range.\n");
        return head;
    }
    if(temp->prev!=NULL)
    {
        temp->prev->next=temp->next;
    }
    if(temp->next!=NULL)
    {
        temp->next->prev=temp->prev;
    }
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
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
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
        printf("enter value to node %d:",i+1);
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
    printf("\nlist before deleting node at specific positoin:\n");
    display(head);
    head=del_spec(head);
    printf("\nlist after deleting node at specific positoin:\n");
    display(head);
    return 0;
}*/

// code to reverse a double linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *reverse(struct node *head)
{
    struct node *current,*temp;
    current = head;
    while(current!=NULL)
    {
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->prev;
    }
    if(temp!=NULL)
    {
        head=temp->prev;
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
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
int main()
{
    struct node *head=NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of modes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value to node %d:\n",i+1);
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
    head=reverse(head);
    display(head);
return 0;
}*/

// displaying double linked list before reversing it and after reversing it
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev; 
};
struct node *reverse(struct node *head)
{
    struct node *current,*temp;
    current=head;
    while(current!=NULL)
    {
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->prev;
    }
    if(temp!=NULL)
    {
        head=temp->prev;
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
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
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
        printf("enter value to node %d:\n",i+1);
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
    printf("list before reversing :\n");
    display(head);
    head=reverse(head);
    printf("list after reversing :\n");
    display(head);
    return 0;
}*/