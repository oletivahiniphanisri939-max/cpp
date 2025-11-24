#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head;
void create();
void insert_at_begining();
void insert_at_end();
void insert_at_any_position();
void deletion_at_begin();
void deletion_at_end();
void deletion_at_any_position();
void display();
int main()
{
	int choice;
	printf("Enter a choice:\n1.create\n2.insert_at_begining\n3.insert_at_end\n4.insert_at_any_position\n5.deletion_at_begin\n6.deletion_at_end\n7.deletion_at_any_position\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
				create();break;
		case 2:
				insert_at_begining();break;
		case 3:
				insert_at_end();break;
		case 4:
				insert_at_any_position();break;
		case 5:
			    deletion_at_begin();break;
		case 6:
			    deletion_at_end();break;
		case 7:
			    deletion_at_any_position();break;
		default:
			    printf("\nInvalid choice!!\n");
    }
	display();
	return 0;
}
void create()
{
	struct node *first=(struct node *)malloc(sizeof(struct node));
	struct node *second=(struct node *)malloc(sizeof(struct node));
	struct node *third=(struct node *)malloc(sizeof(struct node));
	struct node *fourth=(struct node *)malloc(sizeof(struct node));
	printf("Enter data:\n");
	scanf("%d%d%d%d",&first->data,&second->data,&third->data,&fourth->data);
	head=first;
	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=NULL;
	first->prev=NULL;
	second->prev=first;
	third->prev=second;
	fourth->prev=third;
}
void insert_at_begining()
{
	create();
	struct node *n1=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter data for newnode:");
	scanf("%d",&n1->data);
	n1->next=head;
	n1->prev=NULL;
	head->prev=n1;
	head=n1;
}
void insert_at_end()
{
	create();
	struct node *n1=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter data for newnode:");
	scanf("%d",&n1->data);
	n1->next=NULL;
	struct node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n1;
	n1->prev=temp;	
}
void insert_at_any_position()
{
	create();
	struct node *n1=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter data for newnode:\n");
	scanf("%d",&n1->data);
	struct node *temp=head;
	int position,i;
	printf("Enter position:\n");
	scanf("%d",&position);
	for(i=1;i<position;i++)
	{
		if(temp->next!=NULL)
			temp=temp->next;
	}
	n1->next=temp->next;
	temp->next=n1;
	n1->prev=temp;
}
void deletion_at_begin()
{
	create();
	struct node *temp=head;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else if(head->next==NULL)
	{
		free(head);
	}
	else
	{
		temp=head;
		head=head->next;
		head->prev=NULL;
		free(temp);
	}
}
void deletion_at_end()
{
	create();
	struct node *temp=head;
	struct node *x;
	struct node *prev;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else if(head->next==NULL)
	{
		free(head);
	}
	else
	{
		while(temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		free(temp);
		prev->next=NULL;
		}
}
void deletion_at_any_position()
{
	create();
	struct node *temp,*nextnode,*x;
	int loc,i=1;
	printf("\nEnter the location of the node after which you want to perform deletion:\n");
	scanf("%d",&loc);
	temp=head;
	for(i=1;i<loc;i++)
	{
		temp=temp->next;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	nextnode->next=x;
	nextnode->prev=x->prev;
	free(nextnode);
}
void display()
{
	struct node *temp1=head;
	while(temp1!=NULL)
	{
		printf("%d-->",temp1->data);
		temp1=temp1->next;
	}
}

