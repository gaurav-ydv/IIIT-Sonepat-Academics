#include<stdio.h>
#include<stdlib.h>
struct node{ int data;
            struct node *link;
            }*head;
void createnode(int n)
{ int data;
head=(struct node*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Memory not allocated.");
}
struct node *temp;
printf("Enter the data of first node:");
scanf("%d",&data);
head->data=data;
head->link=NULL;
temp=head;
for(int i=1;i<n;i++)
{ struct node *mnode=(struct node*)malloc(sizeof(struct node));
if(mnode==NULL)
{
printf("Memory not allocated.");
}
printf("Enter the data:");
scanf("%d",&data);
mnode->data=data;
mnode->link=NULL;
temp->link=mnode;
temp=temp->link;
}
printf("List Created Successfully");
}
void front()
{ struct node *temp=head;
struct node *p=NULL,*n;
while(temp!=NULL)
{ n=temp->link;
temp->link=p;
p=temp;
temp=n;}
head=p;}
void display()
{
struct node *temp=head;
while(temp!=NULL)
{ printf("\n%d\n",temp->data);
    temp=temp->link;
}
printf("List Printed Successfully");
}
void main()
{ int n;
printf("Enter the value of n:");
scanf("%d",&n);
createnode(n);
front();
display();
}




