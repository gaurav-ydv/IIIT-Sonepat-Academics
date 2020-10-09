#include<stdio.h>
#include<stdlib.h>
struct node{int data;
            struct node *link;
            }*head;
 void new_node(int n)
{ int data;
struct node *temp;
head = (struct node*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Memory not allocated.");
}
temp= head;
printf("enter the data of the first node:");
scanf("%d",&data);
temp->data=data;
temp->link=NULL;
for(int i=1;i<n;i++)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("Memory not allocated.");
}
printf("enter the data:");
scanf("%d",&data);
newnode->data=data;
newnode->link=NULL;
temp->link=newnode;
temp=temp->link;
}printf("List Created Successfully.");}
void delnode()
{
struct node *temp=head;
temp=temp->link;
head=temp;
}
 void display()
{
struct node *temp=head;
while(temp!=NULL)
{ printf("\n%d\n",temp->data);
temp=temp->link;
}
}
void main()
{ int n;
printf("enter the value of n:");
scanf("%d",&n);
new_node(n);
delnode();
display();
}

