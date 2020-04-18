#include<stdio.h>
#include<stdlib.h>
struct node{ int data;             // Node is created.
             struct node *link;
           } *head;
void newnode(int n)    // To create further nodes.
{ int data;
  struct node *temp;
  printf("enter data of first node:");
  scanf("%d",&data);
  head=(struct node*)malloc(sizeof(struct node)); 
  if(head==NULL)
{
printf("Memory not allocated");
}
  temp=head;
  head->data=data;
  head->link=NULL;
  for(int i=2;i<=n;i++)
  { struct node *nnode=(struct node*)malloc(sizeof(struct node)); //Create new node to allocate memory .
if(nnode==NULL)
{
printf("Memory not allocated");
}
    printf("enter data:");
    scanf("%d",&data);
    nnode->data=data;
    nnode->link=NULL;
    temp->link=nnode;
    temp=temp->link;
    }}
 void main()
{ int n;
printf("enter no. of elements:");
scanf("%d",&n);
newnode(n);
}

