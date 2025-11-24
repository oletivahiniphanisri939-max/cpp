#include <stdio.h> 
#include <stdlib.h> 
struct Node 
{ 
int data; 
struct Node* next; 
}; 
struct Node *front = NULL, *rear = NULL; 
void enqueue(); 
void dequeue(); 
void display(); 
int main() 
{ 
    int choice; 
     
    while (1)  
               { 
        printf("\nQueue Operations:\n"); 
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice)  
                     { 
            case 1: enqueue(); break; 
            case 2: dequeue(); break; 
            case 3: display(); break; 
            case 4: printf("Exiting program...\n"); exit(0); 
            default: printf("Invalid choice! Try again.\n"); 
        } 
    } 
 
    return 0; 
} 
 
void enqueue()  
{ 
    int value; 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct 
Node)); 
 
    if (newNode == NULL)  
             { 
} 
printf("Memory allocation failed! Cannot enqueue.\n"); 
return; 
printf("Enter the value to enqueue: "); 
scanf("%d", &value); 
newNode->data = value; 
newNode->next = NULL; 
if (rear == NULL) { // If queue is empty 
front = rear = newNode; 
} else { 
rear->next = newNode; 
rear = newNode; 
} 
printf("%d enqueued to the queue.\n", value); 
} 
void dequeue() 
{ 
if (front == NULL)   
{ 
printf("Queue Underflow! The queue is empty.\n"); 
return; 
} 
struct Node* temp = front; 
printf("%d dequeued from the queue.\n", front->data); 
front = front->next; 
if (front == NULL)  
{  
rear = NULL; 
} 
free(temp); 
} 
void display()  
{ 
if (front == NULL)   
{ 
printf("Queue is empty.\n"); 
return; 
} 
struct Node* temp = front; 
printf("Queue elements: "); 
while (temp != NULL) { 
printf("%d ", temp->data); 
temp = temp->next; 
} 
printf("\n"); 
}
