 #include <stdio.h> 
#define MAX 5  
int stack[MAX], top = -1; 
 
void push() 
 { 
    if (top == MAX - 1) 
 { 
      printf("Stack Overflow"); 
    } 
 else  
{ 
        int value; 
        printf("Enter value to push: "); 
        scanf("%d", &value); 
        stack[top++] = value; 
        printf("%d pushed to stack.\n", value); 
    } 
} 
 
void pop() { 
    if (top == -1)  
{ 
        printf("Stack Underflow\n"); 
    } 
 else  
{ 
        printf("%d popped from stack.\n", stack[top--]); 
    } 
} 
 
 
void peek() 
 { 
    if (top == -1)  
{ 
        printf("Stack is empty.\n"); 
    }  
else  
{ 
        printf("Top element: %d\n", stack[top]); 
    } 
} 
 
void display() 
 { 
    if (top == -1) 
 { 
        printf("Stack is empty.\n"); 
    }  
else  
{ 
        printf("Stack elements: "); 
        for (int i = 0; i <= top; i++)  
        { 
            printf("%d ", stack[i]); 
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
            case 5: printf("Exiting...\n"); 
                   return 0; 
            default: printf("Invalid choice! Try again.\n"); 
        } 
    } 
} 
 

