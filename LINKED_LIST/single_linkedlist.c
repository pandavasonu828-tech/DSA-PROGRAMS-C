// creation of linked list 

/*#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    struct node *head=NULL,*newnode,*temp;
    int n,i;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter data for node %d:\n",i+1);
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    printf("\n linked list elements are:\n");
    temp = head;
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL");
    return 0;
}
*/

// by using functoins create the linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *createlist()
{
    struct node *head = NULL, *newnode, *temp;
    int n,i,value;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter data for node %d :",i);
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
            temp -> next = newnode;
            temp = newnode;
        }
    }
    return head;
}
void display(struct node *head)
{
    struct node *temp = head;
    printf("Linked list:\n");
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp -> next;
    }
    printf("NULL");
}
int main()
{
    struct node *head;
    head = createlist();
    display(head);
    return 0;
}
*/
// CREATING A SINGLE LINKED LIST USING DO WHILE LOOP 
/*#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *create()
{
    struct node *head=NULL,*newnode,*temp;
    int choice,x;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data to insert in node:\n");
        scanf("%d",&x);
        newnode->data=x;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to create another node?(1-yes / 0-no): ");
        scanf("%d",&choice);
    } while(choice==1);
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
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
int main()
{
    struct node *head;
    head=create();
    printf("\nLinked list:\n");
    display(head);
    return 0;
}*/

// program to insert a node at beginning to the linked list  and  main point concept is every node is insert at beginning so it gives a reverse order
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert_at_beginnig(struct node*head)
{
    struct node *newnode;
    int value;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter value:\n");
    scanf("%d",&value);
    newnode -> data = value;
    newnode -> next = head;
    head = newnode;
    return head;
}
void display(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d->",temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}                                                       
int main()
{
    struct node *head = NULL;
    int i,n;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        head = insert_at_beginnig(head);
    }
    display(head);
    return 0;
}
    */

/*#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *insert_beg(struct node *head,int value)
{
    struct node *newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("list is empty.");
        return head;
    }
    newnode -> data = value;
    newnode -> next = head;
    head = newnode;
    return head;
}
void display(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main()
{
    struct node *head = NULL,*newnode,*temp;
    int n,i,value;
    printf("enter number of nodes :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&value);
        newnode -> data = value;
        newnode ->next = NULL;
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp = head;
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = newnode;
        }
    }
    printf("\nbefore inserting node linked list:\n");
    display(head);
    head = insert_beg(head,value);
    printf("\nafter inserting node linked list:\n");
    display(head);
    return 0;
}
    */
// program to display the linked list before inserting the node and displaying linked list after inserting node

/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp-> next;
    }
    printf("NULL\n");
}
struct node *insert_beginning(struct node *head, int value)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next = head;
    head = newnode;
    return head;
}
int main()
{
    struct node *head = NULL, *newnode, *temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter data for node %d :",i+1);
        scanf("%d",&newnode->data);
        newnode -> next = NULL;
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
    }

    printf("\n linked list before inserting the node at beginning:\n");
    display(head);
    printf("enter the value to insert at beginning:\n");
    scanf("%d",&value);
    head = insert_beginning(head,value);
    printf("\n linked list after inserting the node at beginning:\n");
    display(head);
return 0;
}
*/

// program to inserting the node at end
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert_end(struct node* head)
{
    struct node *newnode, *temp;
    int value;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter value:\n");
    scanf("%d",&value);
    newnode -> data = value;
    newnode -> next = NULL;
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp -> next = newnode;
    }
    return head;
}
void display(struct node* head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
       printf("%d->",temp->data);
       temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node *head = NULL;
    int n,i;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        head = insert_end(head);
    }
    display(head);
    return 0;
}
    */

// program to display linked list before inserting node at end and displaying linked list after inserting at end
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp ->next;
    }
    printf("NULL\n");
}
struct node *insert_end(struct node *head, int value)
{
    struct node *newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next = NULL;
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while(temp -> next != NULL)
        {
            temp = temp->next;
        }
        temp -> next = newnode;
    }
    return head;
}
int main()
{
    struct node *head = NULL, *newnode, *temp;
    int n,i,value;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter data for node %d :",i+1);
        scanf("%d",&newnode->data);
        newnode -> next = NULL;
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
    }

    printf("\nthe linked list before inserting node at end:\n");
    display(head);

    printf("enter the value inserting at end:\n");
    scanf("%d",&value);
    head = insert_end(head,value);
    
    printf("\nthe linked list after inserting node at end:\n");
    display(head);
return 0;
}
*/

// inserting node at specific position
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp -> next;
    }
    printf("NULL");
}
struct node *insert_pos(struct node *head)
{
    struct node *newnode,*temp;
    int pos,i,value;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter value:\n");
    scanf("%d",&value);
    printf("enter position:\n");
    scanf("%d",&pos);
    newnode -> data = value;
    newnode -> next = NULL;
    if(pos == 1)
    {
        newnode -> next = head;
        head = newnode;
        return head;
    }
    temp = head;
    for(i=1;i<pos-1 && temp != NULL;i++)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        printf("invalid position");
        return head;
    }
    newnode -> next = temp -> next;
    temp -> next = newnode;
    return head;
}
int main()
{
    struct node *head = NULL;
    int n,i;
    printf("enter number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        struct node *temp, *newnode;
        int value;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter value:\n");
        scanf("%d",&value);
        newnode -> data = value;
        newnode -> next = NULL;
        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = newnode;
        }
    }
    head = insert_pos(head);
    display(head);
    return 0;
}
    */

// displaying linked list after inserting node at specific position and before inserting node at specific position 
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert_pos(struct node *head)
{
    struct node *newnode,*temp;
    int pos,i,value;
    printf("enter value:\n");
    scanf("%d",&value);
    printf("enter position:\n");
    scanf("%d",&pos);
    if(head == NULL)
    {
        printf("list is empty.");
        return head;
    }
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next = NULL;
    if(pos == 1)
    {
        newnode -> next = head;
        head = newnode;
        return head;
    }
    temp = head;
    for(i=1;i<pos-1&&temp!=NULL;i++)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        printf("invalid position");
        return head;
    }
    newnode -> next = temp -> next;
    temp -> next = newnode;
    return head;
}
void display(struct node *head)
{
    struct node *temp=head;
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL");
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
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = newnode;
        }
    }
    printf("\nbefore inserting node list is:\n");
    display(head);
    head = insert_pos(head);
    printf("\nafter inserting node list is:\n");
    display(head);
    return 0;
}
*/

// Deleting a node from a linked list at beginning
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *delete_beg(struct node *head)
{
    struct node *temp;
    if(head == NULL)
    {
        printf("list is empty.");
        return head;
    }
    temp = head;
    head = head -> next;
    free(temp);
    return head;
}
void display(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp -> next;
    }
    printf("NULL");
}
int main()
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
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = newnode;
        }
    }
    head = delete_beg(head);
    display(head);
    return 0;
}
*/

// deletion of a node at beginning program to display linked list before deletion and after deletion
/*#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;  
};
struct node *delete_beg(struct node *head)
{
    struct node *temp;
    if(head == NULL)
    {
        printf("list is empty.");
        return head;
    }
    temp = head;
    head = head -> next;
    free(temp);
    return head;
}
void display(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL");
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
        printf("enter value:\n",i+1);
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
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = newnode;
        }
    }
    printf("\nlinked list before deletion : \n");
    display(head);
    head = delete_beg(head);
    printf("\nlinked list after deletion : \n");
    display(head);
    return 0;
}
    */

// deletion of a node at end of a linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *delete_end(struct node *head)
{
    struct node *temp,*prevnode = NULL;
    if(head == NULL)
    {
        printf("list is empty.");
        return head;
    }
    temp = head;
    while(temp -> next != NULL)
    {
        prevnode = temp;
        temp = temp->next;
    }
    if(temp == head)
    {
        head = NULL;
    }
    else
    {
        prevnode -> next = NULL;
    }
    free(temp);
    return head;
}
void display(struct node *head)
{
    struct node *temp;
    temp = head;
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL");   
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
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = newnode;
        }
    }
    head = delete_end(head);
    display(head);
    return 0;
}*/

// deletion of a node at end program to display linked list before deletion and after deletion
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *delete_end(struct node *head)
{
    struct node *prevnode = NULL,*temp;
    if(head == NULL)
    {
        printf("linked list is empty.");
        return head;
    }
    temp = head;
    while(temp -> next != NULL)
    {
        prevnode = temp;
        temp = temp->next;
    }
    if(temp == head)
    {
        head = NULL;
    }
    else
    {
        prevnode -> next = NULL; 
    }
    free(temp);
    return head;
}
void display(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL");
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
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = newnode;
        }
    }
    printf("\nlinked list before deleting a node:\n ");
    display(head);
    head = delete_end(head);
    printf("\nlinked list after deleting a node:\n ");
    display(head);
    return 0;
}
    */

// delete a node at specific position in a linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *delete_pos(struct node *head)
{
    struct node *nextnode,*temp;
    int pos,i;
    if(head == NULL)
    {
        printf("list is empty.");
        return head;
    }
    printf("enter position:\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        temp = head;
        head = head -> next;
        free(temp);
        return head;
    }
    temp = head;
    for(i=0;i<pos;i++)
    {
        nextnode = temp;
        temp = temp->next;
        if(temp == NULL)
        {
            printf("invalid position.");
            return head;
        }
    }
    nextnode -> next = temp -> next;
    free(temp);
    return head;
}
void display(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp-> next;
    }
    printf("NULL");
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
            while(temp -> next != NULL)
            {
                temp = temp-> next;
            }
            temp -> next = newnode;
        }
    }
    head = delete_pos(head);
    display(head);
    return 0;
}
    */

// displaying linked list before deleting a node at specific ppostion and after deleting at specific position
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *delete_pos(struct node *head)
{
    struct node *prev,*temp;
    int pos,i;
    if(head == NULL)
    {
        printf("list is empty.");
        return head;
    }
    printf("enter position:\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        temp = head;
        head = head -> next;
        free(temp);
        return head;
    }
    temp = head;
    for(i=1;i<pos;i++)
    {
        prev = temp;
        temp = temp -> next;
        if(temp == NULL)
        {
            printf("invalid position.");
            return head;
        }
    }
    prev -> next = temp -> next;
    free(temp);
    return head;
}
void display(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp -> next;
    }
    printf("NULL");
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
            while(temp -> next != NULL)
            {
                temp = temp->next;
            }
            temp -> next = newnode;
        }
    }
    printf("\nlinked list before deleting node:\n");
    display(head);
    head = delete_pos(head);
    printf("\nlinked list after deleting node:\n");
    display(head);
    return 0;
}*/

// reversing a linked list using iterative method
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *reverse(struct node *head)
{
    struct node *prevnode=NULL,*currentnode=head,*nextnode;
    if(head == NULL)
    {
        printf("list is empty.");
        return head;
    }
    while(currentnode!=NULL)
    {
        nextnode = currentnode->next;
        currentnode -> next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
return head;
}
void display(struct node *head)`
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d->",temp -> data);
        temp = temp->next;
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
            while(temp -> next != NULL)
            {
                temp = temp->next;
            }
            temp -> next = newnode;
        }
    }
    head = reverse(head);
    display(head);
    return 0;   
}*/

// checking linked list are identical or not
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create()
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
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    return head;
}
int check(struct node *head1,struct node *head2)
{
    while(head1!=NULL&&head2!=NULL)
    {
        if(head1->data!=head2->data)
        {
            return 0;
        }
        head1=head1->next;
        head2=head2->next;
    }
    if(head1==NULL&&head2==NULL)
    {
        return 1;
    }
    return 0;
}
void display(struct node *head)
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty.");
        return;
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
int main()
{
    struct node *head1,*head2;
    printf("first linked list :\n");
    head1=create();
    printf("second linked list :\n");
    head2=create();
    printf("list1:\n");
    display(head1);
    printf("list2:\n");
    display(head2);
    if(check(head1,head2))
    {
        printf("two lists are identical");
    }
    else
    {
        printf("not identical");
    }
    return 0;
}
    */

// searching the element in linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void search(struct node *head)
{
    int key,found=0,pos=1;
    struct node *temp=head;
    if(head==NULL)
    {
        printf("list is empty.");
        return;
    }
    printf("enter element to search:");
    scanf("%d",&key);
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            printf("node found at position %d",pos);
            found=1;
            break;
        }
        temp=temp->next;
        pos++;
    }
    if(found==0)
    {
        printf("node not found");
    }
}
void display(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
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
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    printf("Linked list:\n");
    display(head);
    search(head);
    return 0;
}*/

/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create()
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
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    return head;
}
void display(struct node *head)
{
    struct node *temp=head;
    int pos=1;
    if(head==NULL)
    {
        printf("list is empty.");
        return;
    }
    while(temp!=NULL)
    {
        if(pos==3)
        {
            printf("\nstep down");
        }
        printf("%d->",temp->data);
        temp=temp->next;
        pos++;
    }
    printf("NULL");
}
int main()
{
    struct node *head;
    head=create();
    display(head);
    return 0;
}*/

// finding and removing duplicate elements in a single linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *dup(struct node *head)
{
    struct node *current,*temp,*prev;
    if(head==NULL)
    {
        printf("list is empty");
        return head;
    }
    current = head;
    while(current!=NULL)
    {
        prev=current;
        temp=current->next;
        while(temp!=NULL)
        {
            if(current->data==temp->data)
            {
                prev->next=temp->next;
                free(temp);
                temp=prev->next;
            }
            else
            {
                prev=temp;
                temp=temp->next;
            }
        }
        current=current->next;
    }
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
        printf("%d->",temp->data);
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
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    printf("the newlist after removing duplicate elements:\n");
    head=dup(head);
    display(head);
    return 0;
}*/

// displaying linked list before finding and removing duplicate elements in list and after that
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *dup(struct node *head)
{
    struct node *current,*temp,*prev;
    if(head==NULL)
    {
        printf("list is empty");
        return head;
    }
    current=head;
    while(current!=NULL)
    {
        prev=current;
        temp=current->next;
        while(temp!=NULL)
        {
            if(current->data==temp->data)
            {
                prev->next=temp->next;
                free(temp);
                temp=prev->next;
            }
            else
            {
                prev=temp;
                temp=temp->next;
            }
        }
        current=current->next;
    }
    return head;
}
void display(struct node *head)
{
    struct node *temp=head;
    if(head ==NULL)
    {
        printf("list is empty");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
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
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    printf("\nbefore removing duplicate node the list is:\n");
    display(head);
    printf("\nafter removing duplicate node the list is:\n");
    head=dup(head);
    display(head);
    return 0;
}*/

// CREATING A FULL CODE OF SINGLE LINKED LIST OPERATING ALL OPERATONS LIKE INSERTING(BEG,END,POS) AND DELETING(BEG,END,POS) LIKE MENU DRIVEN PROGRAM
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create()
{
    struct node *head=NULL,*newnode,*temp;
    int choice,x;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data in node:\n");
        scanf("%d",&x);
        newnode->data=x;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to create another node(1-yes/0-no): ");
        scanf("%d",&choice);
    } while(choice==1);
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
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
struct node *insert_begin(struct node *head)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    return head;
}
struct node *insert_end(struct node *head)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    printf("Enter data:\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    return head;
}
struct node *insert_pos(struct node *head)
{
    struct node *newnode,*temp;
    int pos,i=1;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:\n");
    scanf("%d",&newnode->data);
    if(pos==1)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    temp=head;
    while(i<pos-1&&temp!=NULL)
    {
        temp=temp->next;
        i++;
    }
    if(temp==NULL)
    {
        printf("invalid position.");
    }
    else
    {
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return head;
}
struct node *delete_beg(struct node *head)
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty");
        return head;
    }
    temp=head;
    head=head->next;
    free(temp);
    return head;
}
struct node *delete_end(struct node *head)
{
    struct node *temp,*prev;
    if(head==NULL)
    {
        printf("list is empty.");
        return head;
    }
    if(head->next==NULL)
    {
        free(head);
        head=NULL;
        return head;
    }
    temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
    return head;
}
struct node *delete_pos(struct node *head)
{
    struct node *temp,*prev;
    int i=1,pos;
    if(head==NULL)
    {
        printf("list is empty.");
        return head;
    }
    printf("Enter position:\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    temp=head;
    while(i<pos&&temp!=NULL)
    {
        prev=temp;
        temp=temp->next;
        i++;
    }
    if(temp==NULL)
    {
        printf("invalid position.");
    }
    else
    {
        prev->next=temp->next;
        free(temp);
    }
    return head;
}
int main()
{
    struct node *head;
    int choice;
    head=create();
    do
    {
        printf("\n----SINGLE LINKED LIST-----\n1.insert beginning\n2.insert end\n3.insert position\n4.delete beginning\n5.delete end\n6.delete position\n7.display\n8.exit\nenter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:head=insert_begin(head);
            break;
            case 2:head=insert_end(head);
            break;
            case 3:head=insert_pos(head);
            break;
            case 4:head=delete_beg(head);
            break;
            case 5:head=delete_end(head);
            break;
            case 6:head=delete_pos(head);
            break;
            case 7:display(head);
            break;
            case 8:printf("program end.");
            break;
            default:printf("invalid choice.");
        }
    } while(choice!=8);
    return 0;
}
*/
