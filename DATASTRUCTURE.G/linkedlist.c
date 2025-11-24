#include<stdio.h>
#include<stdlib.h>
struct node{
		int data;
		struct node*next;
	}head;
int main(){
	struct node*temp;
	struct node*head=NULL;
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=4;
newnode->next=head;
head=newnode;

temp=head;
while(temp!=NULL){
	printf("The data is   ");
	printf("%d",temp->data);
	temp=temp->next;
}}


