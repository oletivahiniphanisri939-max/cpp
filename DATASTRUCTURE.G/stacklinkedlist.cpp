#include <stdio.h> 
#include <stdlib.h> 
struct Node  
{ 
    int data; 
    struct Node* next; 
}; 
struct Node* top = NULL; 
 
void push()  
{ 
    int value; 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
     
    if (newNode == NULL)  
        { 
        printf("Stack Overflow"); 
        return; 
           } 
     
    printf("Enter value to push: "); 
    scanf("%d", &value); 
     
    newNode->data = value; 
    newNode->next = top; 
    top = newNode; 
     
    printf("%d pushed to stack.\n", value); 
} 
 
 
void pop()  
{ 
    if (top == NULL)  
        { 
        printf("Stack Underflow! No element to pop.\n"); 
               } 
      else 
         
 { 
        struct Node* temp = top; 
        printf("%d popped from stack.\n", top->data); 
        top = top->next; 
        free(temp); 
    } 
} 
 
void peek() 
 { 
    if (top == NULL) { 
        printf("Stack is empty.\n"); 
    }  
else 
 { 
        printf("Top element: %d\n", top->data); 
    } 
} 
 
void display() 
 { 
    if (top == NULL)  
       { 
        printf("Stack is empty.\n"); 
    }  
else  
      { 
        struct Node* temp = top; 
        printf("Stack elements: "); 
        while (temp != NULL) { 
            printf("%d ", temp->data); 
            temp = temp->next; 
        } 
        printf("\n"); 
    } 
} 
 

 
 
int main() { 
    int choice; 
    while (1) { 
        printf("\nStack Operations:\n"); 
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
         
        switch (choice) { 
            case 1: push(); break; 
            case 2: pop(); break; 
            case 3: peek(); break; 
            case 4: display(); break; 
            case 5: 
			printf("Exiting...\n");  
                exit(0);
                printf("Exiting...\n"); 
                return 0; 
            default: 
                printf("Invalid choice! Try again.\n"); 
        } 
    } 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 

