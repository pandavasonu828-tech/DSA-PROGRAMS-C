// QUEUE follows FIFO principle that is first in first out 
// ENQUEUE OPERATION -> pushing element into queue
/*#include<stdio.h>
#define N 5
int queue[N];
int rear=-1;
int front=-1;
void enqueue()
{
    int value;
    if(rear==N-1)
    {
        printf("queue is full.");
    }
    else
    {
        printf("enter value:\n");
        scanf("%d",&value);
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear++;
        }
        queue[rear]=value;
        printf("inserted successfully\n");
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("queue elements are:\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}
int main()
{
    int i;
    printf("enter %d elements:\n",N);
    for(i=0;i<N;i++)
    {
        enqueue();
    }
    printf("\nQueue elements are:\n");
    display();
    return 0;
}*/

// DEQUEUE -> removing an element from queue
/*#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue()
{
    int value;
    if(rear==N-1)
    {
        printf("queue is full");
    }
    else
    {
        printf("enter value:\n");
        scanf("%d",&value);
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear++;
        }
        queue[rear]=value;
        printf("inserted successfully.\n");
    }
}
void dequeue()
{
    if(front==-1||front>rear)
    {
        printf("queue is empty.\n");
    }
    else
    {
        printf("deleted element is:%d\n",queue[front]);
        front++;
        if(front>rear)
        {
            front=-1;
            rear=-1;
        }
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("queue is empty.");
    }
    else
    {
        printf("queue elements are:\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}
int main()
{
    int i;
    printf("enter %d elements:\n",N);
    for(i=0;i<N;i++)
    {
        enqueue();
    }
    printf("\nbefore removing an element:\n");
    display();
    dequeue(); 
    printf("\nafter removing an element:\n");
    display();
    return 0;
}*/

// PEEK FUNCTION -> to show the top of the queue that is first element of front
/*#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue()
{
    int value;
    if(rear==N-1)
    {
        printf("queue is full");
    }
    else
    {
        printf("enter value:\n");
        scanf("%d",&value);
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear++;
        }
        queue[rear]=value;
    }
}
void peek()
{
    if(front==-1||front>rear)
    {
        printf("\nqueue is empty\n");
    }
    else
    {
        printf("\nfront element is:%d\n",queue[front]);
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("queue is empty.\n");
    }
    else
    {
        printf("Queue elements are:\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}
int main()
{
    int i;
    printf("enter %d elements:\n",N);
    for(i=0;i<N;i++)
    {
        enqueue();
    }
    printf("\n");
    peek();
    printf("\n");
    display();
    return 0;
}*/

// OPERATING all operations by using switch case operator to implement a full code for queue
/*#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue()
{
    int value;
    if(rear==N-1)
    {
        printf("queue is full");
    }
    else
    {
        printf("enter value:\n");
        scanf("%d",&value);
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear++;
        }
        queue[rear]=value;
        printf("\ninserted successfully.\n");
    }
}
void dequeue()
{
    if(front==-1||front>rear)
    {
        printf("queue is empty.");
    }
    else
    {
        printf("deleted element is:%d",queue[front]);
        front++;
        if(front>rear)
        {
            front=-1;
            rear=-1;
        }
    }
}
void peek()
{
    if(front==-1||front>rear)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("front element is:%d",queue[front]);
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    int choice;
    do
    {
        printf("----choose operations----\n1.enqueue()\n2.dequeue()\n3.peek()\n4.display()\n5.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue();
                   break;
            case 2:dequeue();
                   break;
            case 3:peek();
                   break;
            case 4:display();
                   break;
            case 5:printf("exiting...");
                   break;
            default : printf("invalid choice");
        }
    } while (choice!=5);
    return 0;
}*/


// implementation of queue using linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue()
{
    int value;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter value:\n");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
    printf("inserted successfully.");
}
void dequeue()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        temp=front;
        printf("deleted element is:%d\n",front->data);
        front=front->next;
        free(temp);
        if(front==NULL)
        {
            rear=NULL;
        }
    }
}
void peek()
{
    if(front==NULL)
    {
        printf("queue is empty.");
    }
    else
    {
        printf("front element is:%d",front->data);
    }
}
void display()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        temp=front;
        printf("queue elements are:\n");
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n----CIRCULAR QUEUE----\n");
        printf("choose operation\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit\n");
        printf("enter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
            case 5:printf("program ended.");
            break;
            default:printf("invalid choice.");
        }
    } while(choice!=5);
    return 0;
}
*/


                                     // CIRCULAR QUEUE
// enqueue operation
/*#include<stdio.h>
#define N 5
int queue[N];
int front =-1;
int rear=-1;
void enqueue()
{
    int x;
    if((rear+1)%N==front)
    {
        printf("queue is full");
    }
    else
    {
        printf("enter inserted element value:\n");
        scanf("%d",&x);
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=(rear+1)%N;
        }
        queue[rear]=x;
        printf("inserted successfully.");
    }
}
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("queue is:\n");
        while(i!=rear)
        {
            printf("%d\t",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[rear]);
    } 
}
int main()
{
    int i;
    printf("enter %d elements:\n",N);
    for(i=0;i<N;i++)
    {
        enqueue();
    }
    printf("\nQueue elements are:\n");
    display();
    return 0;
}*/

// dequeue operation
/*#include<stdio.h>
#define N 5
int queue[N];
int front =-1;
int rear=-1;
void enqueue()
{
    int x;
    if((rear+1)%N==front)
    {
        printf("queue is full");
    }
    else
    {
        printf("enter inserted element:\n");
        scanf("%d",&x);
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=(rear+1)%N;
        }
        queue[rear]=x;
        printf("inserted successfully.");
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("queue is empty.");
    }
    else if(front==rear)
    {
        printf("deleted element is:%d\n",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("deleted element is:%d",queue[front]);
        front=(front+1)%N;
    }
}
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
        printf("queue is empty.");
    }
    else
    {
        printf("queue is rear:\n");
        while(i!=rear)
        {
            printf("%d",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[rear]);
    }
}
int main()
{
    int i;
    printf("enter %d elements:\n",N);
    for(i=0;i<N;i++)
    {
        enqueue();
    }
    printf("\nBefore Dequeue:\n");
    display();
    dequeue();
    printf("\nAfter removing an element:\n");
    display();   
    return 0;
}*/

// peek operation
/*#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue()
{
    int x;
    if((rear+1)%N==front)
    {
        printf("queue is full");
    }
    else
    {
        printf("enter inserted element:\n");
        scanf("%d",&x);
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=(rear+1)%N;
        }
        queue[rear]=x;
    }
}
void peek()
{
    if(front==-1)
    {
        printf("queue is empty.");
    }
    else
    {
        printf("\nfront element is:%d\n",queue[front]);
    }
}
void display()
{
    int i;
    if(front==-1&&rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("queue elements are:\n");
        i =front;
        while(i!=rear)
        {
            printf("%d\t",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[rear]);
    }
}
int main()
{
    int i;
    printf("enter %d elements:\n",N);
    for(i=0;i<N;i++)
    {
        enqueue();
    }
    printf("queue before performing:\n");
    display();
    printf("\npeek operation\n");
    peek();
    printf("queue after performing:\n");
    display();
    return 0;
}
*/

// performing circular queue full operations using switch operator by using circular array
/*#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue()
{
    int x;
    if((rear+1)%N==front)
    {
        printf("queue is full");
    }
    else{
        printf("insert a element:\n");
        scanf("%d",&x);
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=(rear+1)%N;
        }
        queue[rear]=x;
        printf("inserted successfully.");
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("queue is empty.");
    }
    else if(front==rear)
    {
        printf("dequeued element is %d\n",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("deleted element is:%d\n",queue[front]);
        front=(front+1)%N;
    }
}
void peek()
{
    if(front==-1)
    {
        printf("queue is empty.");
    }
    else
    {
        printf("front element is:%d",queue[front]);
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("queue is empty.");
    }
    else
    {
        printf("queue elements are:\n");
        i=front;
        while(i!=rear)
        {
            printf("%d\t",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[rear]);
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n----- CIRCULAR QUEUE----\n");
        printf("choose operation\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit\n");
        printf("enter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
            case 5:printf("program ended.\n");
            break;
            default:printf("invalid choice\n");
        }
    } while(choice!=5);
    return 0;
}*/

// performing circular queue full operations using switch operator by using circular linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue()
{
    int value;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter value:\n");
    scanf("%d",&value);
    newnode->data=value;
    if(front==NULL&&rear==NULL)
    {
        front=rear=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
    printf("inserted successfully.");
}
void dequeue()
{
    struct node *temp;
    if(front==NULL&&rear==NULL)
    {
        printf("queue is empty.");
    }
    else if(front==rear)
    {
        printf("deleted element is:%d\n",front->data);
        free(front);
        front=NULL;
        rear=NULL;
    }
    else
    {
        temp=front;
        printf("deleted element is:%d\n",front->data);
        front=front->next;
        rear->next=front;
        free(temp);
    }
}
void peek()
{
    if(front==NULL)
    {
        printf("queue is empty.");
    }
    else
    {
        printf("front element is:%d",front->data);
    }
}
void display()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("queue is empty.\n");
    }
    else
    {
        temp=front;
        printf("queue elements are:\n");
        do
        {
            printf("%d->",temp->data);
            temp=temp->next;
        } while(temp!=front);
        printf("%d",temp->data);
        printf("\n");
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n----circular queue----\n");
        printf("choose operation\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit\n");
        printf("enter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
            case 5:printf("program ended.");
            break;
            default:printf("invalid choice");
        }
    } while(choice!=5);
    return 0;
}*/

//DOUBLE ENDED QUEUE(DEQUE) using arrays
/*#include<stdio.h>
#define N 5
int deque[N];
int front=-1;
int rear=-1;
void insertrear()
{
    int x;
    if(rear==N-1)
    {
        printf("queue is full.");
    }
    else
    {
        printf("enter element:\n");
        scanf("%d",&x);
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear++;
        }
        deque[rear]=x;
        printf("inserted at rear.\n");
    }
}
void insertfront()
{
    int x;
    if(front==0)
    {
        printf("insertion at front not possible.\n");
    }
    else
    {
        printf("insert element:\n");
        scanf("%d",&x);
        if(front==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            front--;
        }
        deque[front]=x;
        printf("inserted at front.\n");
    }
}
void deletefront()
{
    if(front==-1&&rear==-1)
    {
        printf("deque is empty");
    }
    else
    {
        printf("deleted element is:%d\n",deque[front]);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front++;
        }
    }
}
void deleterear()
{
    if(front==-1)
    {
        printf("queue is empty.\n");
    }
    else
    {
        printf("deleted element is:%d\n",deque[rear]);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            rear--;
        }
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("queue is empty.\n");
    }
    else
    {
        printf("deque elements are:\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",deque[i]);
        }
        printf("\n");
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n-----DEQUE OPERATIONS----\n1.insertrear\n2.insertfront\n3.deletefront\n4.deleterear\n5.display\n6.exit\n");
        printf("choose operation:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insertrear();
            break;
            case 2:insertfront();
            break;
            case 3:deletefront();
            break;
            case 4:deleterear();
            break;
            case 5:display();
            break;
            case 6:printf("program end.\n");
            break;
            default:printf("invalid choice");
        }
    } while(choice!=6);
    return 0;
}*/

// DEQUE(DOUBLE ENDED QUEUE) using linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void insertfront()
{
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter element:\n");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=NULL;
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
    }
    else
    {
        newnode->next=front;
        front=newnode;
    }
    printf("inserted at front.\n");
}
void insertrear()
{
    int x;
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter element:\n");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=NULL;
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
    }
    else
    {
        temp=front;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        rear=newnode;
    }
    printf("inserted at rear.\n");
}
void deletefront()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        temp=front;
        printf("deleted element is:%d",front->data);
        front=front->next;
        free(temp);
        if(front==NULL)
        {
            rear=NULL;
        }
    }
}
void deleterear()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("queue is empty.");
    }
    else if(front==rear)
    {
        printf("deleted element is :%d",rear->data);
        free(rear);
        front=NULL;
        rear=NULL;
    }
    else
    {
        temp=front;
        while(temp->next!=rear)
        {
            temp=temp->next;
        }
        printf("deleted element is:%d",rear->data);
        temp->next=NULL;
        rear=temp;
        free(temp->next);
    }
}
void display()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        temp=front;
        printf("deque elements are:\n");
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n-----DEQUE OPERATIONS----\n1.insertfront\n2.insertrear\n3.deletefront\n4.deleterear\n5.display\n6.exit\n");
        printf("choose operation");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertrear();
            break;
            case 2:insertfront();
            break;
            case 3:deletefront();
            break;
            case 4:deleterear();
            break;
            case 5:display();
            break;
            case 6:printf("program end.\n");
            break;
            default:printf("invalid choice");
        }
    } while(ch!=6);
    return 0;
}*/

// DEQUE(DOUBLE ENDED QUEUE) using circular array
/*#include<stdio.h>
#define N 5
int deque[N];
int front =-1;
int rear=-1;
void insertrear()
{
    int x;
    if((rear+1)%N==front)
    {
        printf("queue is full.");
    }
    else
    {
        printf("enter value:\n");
        scanf("%d",&x);
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=(rear+1)%N;
        }
        deque[rear]=x;
        printf("insert at rear.");
    }
}
void insertfront()
{
    int x;
    if((rear+1)%N==front)
    {
        printf("queue is full.");
    }
    else
    {
        printf("enter element:\n");
        scanf("%d",&x);
        if(front==-1)
        {
            front =0;
            rear=0;
        }
        else
        {
            front=(front-1+N)%N;
        }
        deque[front]=x;
        printf("insert at front.");
    }
}
void deletefront()
{
    if(front==-1)
    {
        printf("queue is empty.");
    }
    else if(front==rear)
    {
        printf("deleted element is:%d\n",deque[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("deleted element is:%d\n",deque[front]);
        front=(front+1)%N;
    }
}
void deleterear()
{
    if(front==-1)
    {
        printf("queue is empty.");
    }
    else if(front==rear)
    {
        printf("deleted element is:%d",deque[rear]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("deleted element is:%d\n",deque[rear]);
        rear=(rear-1+N)%N;
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("queue is empty.");
    }
    else
    {
        printf("deque elements are:\n");
        i=front;
        while(i!=rear)
        {
            printf("%d\t",deque[i]);
            i=(i+1)%N;
        }
        printf("%d\n",deque[rear]);
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n-----DEQUE OPERATIONS----\n1.insertrear\n2.insertfront\n3.deleterear\n4.deletefront\n5.display\n6.exit\nchoose operation:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertrear();
            break;
            case 2:insertfront();
            break;
            case 3:deleterear();
            break;
            case 4:deletefront();
            break;
            case 5:display();
            break;
            case 6:printf("program end.\n");
            break;
            default:printf("invalid choice");
        }
    } while (ch!=6);
    return 0;
}*/

// DEQUE(DOUBLE ENDED QUEUE) using circular linked list
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void insertfront()
{
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter element:\n");
    scanf("%d",&x);
    newnode->data=x;
    if(front==NULL)
    {
        front=rear=newnode;
        rear->next=front;
    }
    else
    {
        newnode->next=front;
        front=newnode;
        rear->next=front;
    }
    printf("insert at rear");
}
void insertrear()
{
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter element:\n");
    scanf("%d",&x);
    newnode->data=x;
    if(front==NULL)
    {
        front=rear=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
    printf("insert at rear");
}
void deletefront()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("queue is empty");
    }
    else if(front==rear)
    {
        printf("deleted element is:%d",front->data);
        front=NULL;
        rear=NULL;
    }
    else
    {
        temp=front;
        printf("deleted element is:%d",front->data);
        front=front->next;
        rear->next=front;
        free(temp);
    }
}
void deleterear()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("queue is mepty.");
    }
    else if(front==rear)
    {
        printf("deleted element is:%d\n",rear->data);
        front=NULL;
        rear=NULL;
    }
    else
    {
        temp=front;
        while(temp->next!=rear)
        {
            temp=temp->next;
        }
        printf("deleted element is:%d",rear->data);
        rear=temp;
        rear->next=front;
        free(temp->next);
    }
}
void display()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        temp=front;
        printf("deque elements are:\n");
        do
        {
            printf("%d->",temp->data);
            temp=temp->next;
        } while (temp!=front);
        printf("\n");
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n-----DEQUE OPERATIONS----\n1.insertfront\n2.insertrear\n3.deletefront\n4.deleterear\n5.display\n6.exit\nchoose operation:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertfront();
            break;
            case 2:insertrear();
            break;
            case 3:deletefront();
            break;
            case 4:deleterear();
            break;
            case 5:display();
            break;
            case 6:printf("program end");
            break;
            default:printf("invalid choice");
        }
    } while (ch!=6);
    return 0;
}
     */