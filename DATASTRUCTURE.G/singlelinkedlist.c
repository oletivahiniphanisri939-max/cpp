#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
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
	printf("Enter a choice:\n1.create \n2.insert at begining \n3.insert at end \n4.insert at any position \n5.deletion at begin \n6.deletion at end \n7.deletion at any position\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				create();
		        break;
			}
		case 2:
			{
				insert_at_begining();
		        break;
			}
		case 3:
			{
				insert_at_end();
		        break;
			}
		case 4:
		    {
				insert_at_any_position();
		        break;
			}
		case 5:
			{
			deletion_at_begin();
			break;
			}
		case 6:
			{
			deletion_at_end();
			break;	
			}
		case 7:
			{
			deletion_at_any_position();
			break;
			}
		default:
			{
			printf("\nINVALID CHOICE");
			break;
			}
				
}
	display();
	return 0;
}
void create()
{
	struct node *first=(struct node*)malloc(sizeof(struct node));
	struct node *second=(struct node*)malloc(sizeof(struct node));
	struct node *third=(struct node*)malloc(sizeof(struct node));
	struct node *fourth=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:\n");
	scanf("%d%d%d%d",&first->data,&second->data,&third->data,&fourth->data);
	head=first;
	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=NULL;
}
void insert_at_begining()
{
	create();
	struct node *n1=(struct node*)malloc(sizeof(struct node));
	printf("Enter data for newnode:\n");
	scanf("%d",&n1->data);
	n1->next=head;
	head=n1;
}
void insert_at_end()
{
	create();
	struct node *n1=(struct node*)malloc(sizeof(struct node));
	printf("Enter data for newnode:\n");
	scanf("%d",&n1->data);
	n1->next=NULL;
	struct node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n1;
}
void insert_at_any_position()
{
	create();
	struct node *n1=(struct node*)malloc(sizeof(struct node));
	printf("Enter data for newnode:\n");
	scanf("%d",&n1->data);
	struct node *temp=head;
	int position,i;
	printf("Enter position:\n");
	scanf("%d",&position);
	for(i=1;i<position;i++)
	{
		if(temp->next!=NULL)
		{
			temp=temp->next;
		}
	}n1->next=temp->next;
	temp->next=n1;
}
void deletion_at_begin()
{
	create();
	struct node *temp=head;
	if(head==NULL)
	{
		printf("List is empty.\n");
	}
	else if(head->next==NULL)
	{
		free(head);
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
	}
}
void deletion_at_end()
{
	create();
	struct node *temp=head;
	struct node *prev;
	if(head==NULL)
	{
		printf("List is empty.\n");
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
	struct node *temp,*nextnode;
	int loc,i=1;
	printf("Enter the location of the node:\n");
	scanf("%d",&loc);
	temp=head;
	for(i=1;i<loc;i++)
	{
		temp=temp->next;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
}
void display()
{
	struct node *temp1=head;
	while(temp1!=NULL)
	{
		printf("%d...>",temp1->data);
		temp1=temp1->next;
	}
}

