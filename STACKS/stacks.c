// implementation of stack using array (static memory allocation)
// PUSH OPERATION
/*#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(int x)
{
    if(top==N-1)
    {
        printf("overflow condition");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("list is empty.");
        return;
    }
    printf("stack elements are:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\t",stack[i]);
    }
}
int main()
{
    int n,i,value;
    printf("enter number of elements(max %d):\n",N);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter value %d:\n",i+1);
        scanf("%d",&value);
        push(value);
    }
    display();
    return 0;
}
*/

// POP OPERATION
/*#include<stdio.h>
#define N 10
int stack[N];
int top=-1;
void push(int x)
{
    if(top==N-1)
    {
        printf("overflow condition");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("underflow condition.");
    }
    else
    {
        item=stack[top];
        top--;
        printf("%d",item);
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty");
        return;
    }
    printf("stack elements are:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\t",stack[i]);
    }
}
int main()
{
    int n,i,value;
    printf("enter number of elements(max:%d):\n",N);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter value:\n");
        scanf("%d",&value);
        push(value);
    }
    printf("after pushing:\n");
    display();
    printf("\npopping first element:\n");
    pop();
    printf("\nafter popping:\n");
    display();
    return 0;
}*/

// PEEK OPERATION
/*#include<stdio.h>
#define N 10
int stack[N];
int top=-1;
void push(int x)
{
    if(top==N-1)
    {
        printf("overflow condition");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("list is empty");
    }
    else
    {
        printf("%d",stack[top]);
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty");
        return;
    }
    printf("stack elements are:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\t",stack[i]);;
    }
    printf("\n");
}
int main()
{
    int n,i,value;
    printf("enter number of elements(max:%d):\n",N);
    scanf("%d",&n);
    if(n>N)
    {
        printf("you can only enter upto %d elements only:",N);
        n=N;
    }

    for(i=0;i<n;i++)
    {
        printf("enter value:\n");
        scanf("%d",&value);
        push(value);
    }
    display();
    printf("\nthe top most element in the stack is :\n");
    peek();
    return 0;
}*/

//creating stack using switch operator
/*#include<stdio.h>
#define N 10
int stack[N];
int top=-1;
void push(int x)
{
    if(top==N-1)
    {
        printf("stack overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack underflow");
    }
    else
    {
        printf("%d deleted from stack",stack[top]);
        top--;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("the top most element is :%d",stack[top]);
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty");
        return;
    }
    printf("stack elements are:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
    printf("\n");
}
int main()
{
    int ch,x;
    do
    {
        printf("enter number to choose \n1.push()\n2.pop()\n3.peek()\n4.display()\n5.exit\n");
        scanf("%d",&ch);
        if(scanf("%d",&ch)!=1)
        {
            printf("invalid input please enter a number.");
            break;
        }
        switch(ch)
        {
            case 1:printf("enter value to push:\n");
                   scanf("%d",&x);
                   push(x);
                   break;
            case 2:pop();
                   break;
            case 3:peek();
                   break;
            case 4:display();
                   break;
            case 5:printf("exit.\n");
                   return 0;
            default : printf("invalid choice");
        }
    }while(ch!=5);
    return 0;
}
*/

// IMPLEMENTATION OF STACK USING LINKED LIST(DYNAMIC MEMORY ALLOCATION)
// push operation
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top=NULL;
void push(int x)
{ 
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("heap overflow. cannot insert %d",x);
        return;
    }
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}
void display()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
        printf("stack is empty");
        return;
    }
    printf("stack elements are:\n");
    while(temp!=NULL)
    {
        printf("%d<-",temp->data);
        temp=temp->link;
    }
    printf("NULL");
}
int main()
{
    int value,n,i;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter value:\n");
        scanf("%d",&value);
        push(value);
    }
    display();
    return 0;
}
*/

//pop operation
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top=NULL;
void push(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("heap overflow.cannot insert %d",x);
        return;
    }
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}
void pop()
{
    struct node *temp;
    if(top==NULL)
    {
        printf("stack underflow");
    }
    else
    {
        temp=top;
        printf("%d deleted from stack\n",top->data);
        top=top->link;
        free(temp);
    }
}
void display()
{
    struct node *temp=top;
    if(top==NULL)
    {
        printf("stack is empty");
        return;
    }
    printf("stack elements are:\n");
    while(temp!=NULL)
    {
        printf("%d<-",temp->data);
        temp=temp->link;
    }
    printf("NULL");
}
int main()
{
    int n,i,value;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter value:\n");
        scanf("%d",&value);
        push(value);
    }
    printf("\n initial stack\n");
    display();
    printf("\nafter popping stack is:\n");
    pop();
    display();
    return 0;
}*/

// peek operation
/*#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
};
struct node *top=NULL;
void push(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("heap overflow");
        return;
    }
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}
void peek()
{
    if(top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        printf("\n%d is top most element\n",top->data);
    }
}
void display()
{
    struct node *temp=top;
    if(top==NULL)
    {
        printf("empty stack.");
        return;
    }
    printf("stack elements are:\n");
    while(temp!=NULL)
    {
        printf("%d<-",temp->data);
        temp=temp->link;   
    }
    printf("NULL");
}
int main()
{
    int n,i,value;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter value:\n");
        scanf("%d",&value);
        push(value);
    }
    peek();
    display();
    return 0;
}*/

// performing all operations using switch operation
/*#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
};
struct node *top=NULL;
void push(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("heap overflow");
        return;
    }
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}
void pop()
{
    struct node *temp=top;
    if(top==NULL)
    {
        printf("empty stack");
        return;
    }
    printf("%d deleted from stack\n",top->data);
    top=top->link;
    free(temp);
}
void peek()
{
    if(top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        printf("\n%d is top most element\n",top->data);
    }
}
void display()
{
    struct node *temp=top;
    if(top==NULL)
    {
        printf("list is empty");
        return;
    }
    printf("stack elements are:\n");
    while(temp!=NULL)
    {
        printf("%d<-",temp->data);
        temp=temp->link;
    }
    printf("NULL");
}
int main()
{
    int ch,value;
    do
    {
        printf("enter number to choose operation\n1.push()\n2.pop()\n3.peek()\n4.display()\n5.exit()\n");
        printf("enter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter value:\n");
            scanf("%d",&value);
            push(value);
            break;
            case 2:pop();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
            case 5:printf("exiting....\n");
            break;
            default:printf("invalid operation");
        }
    } while (ch!=5);
    return 0;
}*/


// INFIX -> POSSTFIX (CHARACTERS) (with using library function  ctype.h)
/*#include<stdio.h>
#include<ctype.h>
#define N 100
char stack[N];
int top=-1;
void push(char x)
{
    stack[++top]=x;
}
char pop()
{
    return stack[top--];
}
int priority(char x)
{
    if(x=='+'||x=='-')
    {
        return 1;
    }
    if(x=='*'||x=='/')
    {
        return 2;
    }
    if(x=='^')
    {
        return 3;
    }
    return 0;
}
int main()
{
    char exp[100],res[100];
    int i,j=0;
    printf("enter infix expression:");
    scanf("%s",exp);
    for(i=0;exp[i]!='\0';i++)
    {
        char ch=exp[i];
        if(isalnum(ch))
        {
            res[j++]=ch;
        }
        else if(ch=='(')
        {
            push(ch);
        }
        else if(ch==')')
        {
            while(top!=-1&&stack[top]!='(')
            {
                res[j++]=pop();
            }
            if(top!=-1)
            {
                pop();
            }
        }
        else
        {
            while(top!=-1&&((ch!='^'&&priority(stack[top])>=priority(ch))||(ch=='^'&&priority(stack[top])>priority(ch))))
            {
                res[j++]=pop();
            }
            push(ch);
        }

    }
    while(top!=-1)
    {
        res[j++]=pop();
    }
    res[j]='\0';
    printf("postfix expression is:%s\n",res);
    return 0;
}*/
// INFIX -> POSTFIX (CHARACTERS) (without using library function ctype.h)
/*#include<stdio.h>
#define N 100
char stack[N];
int top=-1;
void push(char x)
{
    stack[++top]=x;
}
char pop()
{
    return stack[top--];
}
int priority(char x)
{
    if(x=='+'||x=='-')
    {
        return 1;
    }
    if(x=='*'||x=='/')
    {
        return 2;
    }
    if(x=='^')
    {
        return 3;
    }
    return 0;
}
int main()
{
    char exp[20],result[20];
    int i,j=0;
    printf("enter infix expression:\n");
    scanf("%s",exp);
    for(i=0;exp[i]!='\0';i++)
    {
        char ch=exp[i];
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        {
            result[j++]=ch;
        }
        else if(ch=='(')
        {
            push(ch);
        }
        else if(ch==')')
        {
            while(top!=-1&&stack[top]!='(')
            {
                result[j++]=pop();
            }
            if(top!=-1)
            {
                pop();
            }
            
        }
        else
        {
            while(top!=-1&&((ch!='^'&&priority(stack[top])>=priority(ch))||(ch=='^'&&priority(stack[top])>priority(ch))))
            {
                result[j++]=pop();
            }
            push(ch);
        }
    }
    while(top!=-1)
    {
        result[j++]=pop();
    }
    result[j]='\0';
    printf("postfix is:%s\n",result);
    return 0;
}*/

// INFIX -> POSTFIX (NUMBERS) (by using library function ctype.h)
/*#include<stdio.h>
#include<ctype.h>
#define N 100
char stack[N];
int top=-1;
void push(char x)
{
    stack[++top]=x;
}
char pop()
{
    return stack[top--];
}
int prior(char x)
{
    if(x=='+'||x=='-')
    {
        return 1;
    }
    if(x=='*'||x=='/')
    {
        return 2;
    }
    if(x=='^')
    {
        return 3;
    }
    return 0;
}
int main()
{
    char exp[100],res[100],i=0,j=0;
    printf("enter infix expression:\n");
    scanf("%s",exp);
    while(exp[i]!='\0')
    {
        if(isdigit(exp[i]))
        {
            while(isdigit(exp[i]))
            {
                res[j++]=exp[i++];
            }
            res[j++]=' ';
        }
        else if(exp[i]=='(')
        {
            push(exp[i]);
            i++;
        }
        else if(exp[i]==')')
        {
            while(top!=-1&&stack[top]!='(')
            {
                res[j++]=pop();
                res[j++]=' ';
            }
            if(top!=-1)
            {
                pop();
            }
            i++;
        }
        else
        {
            char ch=exp[i];
            while(top!=-1&&((ch!='^'&&prior(stack[top])>=prior(ch))||(ch=='^'&&prior(stack[top])>prior(ch))))
            {
                res[j++]=pop();
                res[j++]=' ';
            }
            push(ch);
            i++;
        }
    }
    while(top!=-1)
    {
        res[j++]=pop();
        res[j++]=' ';
    }
    res[j]='\0';
    printf("postfix expression is:%s",res);
    return 0;
}*/

// INFIX -> POSTFIX (NUMBERS) (by without using library function ctype.h)
/*#include<stdio.h>
#define N 100
char stack[N];
int top=-1;
void push(char x) 
{
    stack[++top]=x;
}
char pop()
{
    return stack[top--];
}
int prior(char x)
{
    if(x=='+'||x=='-')
    {
        return 1;
    }
    if(x=='*'||x=='/')
    {
        return 2;
    }
    if(x=='^')
    {
        return 3;
    }
    return 0;
}
int main()
{
    char exp[100],res[100],i=0,j=0;
    printf("enter infix expression:\n");
    scanf("%s",exp);
    while(exp[i]!='\0')
    {
        if(exp[i]>='0'&&exp[i]<='9')
        {
            while(exp[i]>='0'&&exp[i]<='9')
            {
                res[j++]=exp[i++];
            }
            res[j++]=' ';
        }
        else if(exp[i]=='(')
        {
            push(exp[i]);
            i++;
        }
        else if(exp[i]==')')
        {
            while(top!=-1&&stack[top]!='(')
            {
                res[j++]=pop();
                res[j++]=' ';
            }
            if(top!=-1)
            {
                pop();
            }
            i++;
        }
        else
        {
            char ch =exp[i];
            while(top!=-1&&((ch!='^'&&prior(stack[top])>=prior(ch))||(ch=='^'&&prior(stack[top])>=prior(ch))))
            {
                res[j++]=pop();
                res[j++]=' ';
            }
            push(ch);
            i++;
        }
    }
    while(top!=-1)
    {
        res[j++]=pop();
        res[j++]=' ';
    }
    res[j]='\0';
    printf("postfix expression is:%s",res);
    return 0;
}*/

// POSTFIX EVALUATION
/*#include<stdio.h>
#define N 100
int stack[N];
int top=-1;
void push(int x)
{
    if(top==N-1)
    {
        printf("stack overflow.");
        return;
    }
    stack[++top]=x;
}
int pop()
{
    if(top==-1)
    {
        printf("stack underflow");
    }
    return stack[top--];
}
int main()
{
    char exp[100];
    int i=0;
    printf("enter infix expression:\n");
    fgets(exp,sizeof(exp),stdin);
    while(exp[i]!='\0')
    {
        if(exp[i]>='0'&&exp[i]<='9')
        {
            int num=0;
            while(exp[i]>='0'&&exp[i]<='9')
            {
                num=num*10+(exp[i]-'0');
                i++;
            }
            push(num);
        }
        else if(exp[i]=='(')
        {
            i++;
        }
        else
        {
            int val1=pop();
            int val2=pop();
            int result;
            if(exp[i]=='+')
            {
                result=val2+val1;
            }
            else if(exp[i]=='-')
            {
                result=val2-val1;
            }
            else if(exp[i]=='*')
            {
                result=val1*val2;
            }
            else if(exp[i]=='/')
            {
                result=val2/val1;
            }
            else if(exp[i]=='^')
            {
                result=1;
                for(int j=0;j<val1;j++)
                {
                    result=result*val2;
                }
            }
            push(result);
            i++;
        }
    }
    printf("final answer:%d\n",stack[top]);
    return 0;
}*/


// BACKTRACKING USING STACK
/*#include<stdio.h>
#define N 100
char stack[N];
int top=-1;
void push(char x)
{
    if(top==N-1)
    {
        printf("stack overflow");
        return;
    }
    stack[++top]=x;
    printf("%c path added\n",x);
}
void pop()
{
    if(top==-1)
    {
        printf("stack underflow");
        return;
    }
    printf("%c path removed\n",stack[top]);
    top--;
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("no current path.");
        return;
    }
    printf("current path:\n");
    for(i=0;i<=top;i++)
    {
        printf(" %c",stack[i]);
    }
    printf("\n");
}
int main()
{
    int ch;
    char path;
    do
    {
        printf("\n");
        printf("1.move forward(push):\n");
        printf("2.back track(pop):\n");
        printf("3.display current path:\n");
        printf("exit\n");
        printf("enter choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("enter path name:\n");
                    scanf(" %c",&path);
                    push(path);
                    break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:printf("exit");
                   break;
            default : printf("invalid choice");       
        }
    } while (ch!=4);
return 0; 
}*/

// REVERSE A STRING BY USING STACKS
/*#include<stdio.h>
#include<string.h>
#define N 20
int stack[N];
int top=-1;
void push(int x)
{
    if(top==N-1)
    {
        printf("stack overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
int pop()
{
    if(top==-1)
    {
        printf("stack underflow");
    }
    else
    {
        return stack[top--];
    }
}
int main()
{
    char str[N],rev[N];
    int i,len;
    printf("enter string:");
    fgets(str,N,stdin);
    str[strcspn(str,"\n")]='\0';
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        push(str[i]);
    }
    for(i=0;i<len;i++)
    {
        rev[i]=pop();
    }
    rev[len]='\0';
    printf("original string:%s\n",str);
    printf("reverse string:%s",rev);
    return 0;
}
*/


// CHECKING GIVEN STRING IS A PALINDROME OR NOT USING STACKS
/*#include<stdio.h>
#include<string.h>
#define N 50
char stack[N];
int top=-1;
void push(char x)
{
    if(top==N-1)
    {
        printf("stack overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
char pop()
{
    if(top==-1)
    {
        printf("stack underflow");
        return 0;
    }
    return stack[top--];
}
int main()
{
    char str[N],rev[N];
    int i,len;
    printf("enter string:\n");
    fgets(str,N,stdin);
    str[strcspn(str,"\n")]='\0';
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        push(str[i]);
    }
    for(i=0;i<len;i++)
    {
        rev[i]=pop();
    }
    rev[len]='\0';
    printf("Original string: %s\n",str);
    printf("Reverse string: %s\n",rev);
    if(strcmp(str,rev)==0)
    {
        printf("%s is a palindrome",str);
    }
    else
    {
        printf("%s is not a palindrome",str);
    }
    return 0;
}*/

// DECIMAL TO BINARY CONDITION USING STACKS
/*#include<stdio.h>
#define N 50
int stack[N];
int top=-1;
void push(int x)
{
    if(top==N-1)
    {
        printf("stack overflow");
        return;
    }
    top++;
    stack[top]=x;
}
int pop()
{
    if(top==-1)
    {
        printf("stack underflow");
        return -1;
    }
    return stack[top--];
}
int main()
{
    int n,rem;
    printf("enter decimal number:\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Binary=0");
        return 0;
    }
    while(n>0)
    {
        rem=n%2;
        push(rem);
        n=n/2;
    }
    printf("Binary number :\n");
    while(top!=-1)
    {
        printf("%d",pop());
    }
    return 0;
}
*/

// Parentheses Matching using stacks
#include<stdio.h>
#define N 50
int stack[N];
int top=-1;
void push(int x)
{
    if(top==N-1)
    {
        printf("stack overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
char pop()
{
    if(top==-1)
    {
        return '\0';
    }
    return stack[top--];
}
int match(char open,char close)
{
    if(open=='('&&close==')')
    {
        return 1;
    }
    if(open=='{}'&&close=='}')
    {
        return 1;
    }
    if(open=='['&&close==']')
    {
        return 1;
    }
    return 0;
}
int main()
{
    char exp[N],ch;
    int i;
    printf("enter expression:\n");
    scanf("%s",exp);
    for(i=0;exp[i]!='\0';i++)
    {
        ch=exp[i];
        
    }
}