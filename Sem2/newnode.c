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
printf("Enter the value:");
scanf("%d",&data);
head->data=data;
head->link=NULL;
struct node *temp=head;
for( int i=1;i<n;i++ )
{ struct node *nwnode=(struct node*)malloc(sizeof(struct node));
if(nwnode==NULL)
{
printf("Memory not allocated.");
}
printf("Enter Data:");
scanf("%d",&data);
nwnode->data=data;
nwnode->link=NULL;
temp->link=nwnode;
temp=temp->link;
}
printf("List Created Successfully");
}
 void main()
 { int n;
 printf("Enter the value of n:");
 scanf("%d",&n);
 createnode(n);
}
