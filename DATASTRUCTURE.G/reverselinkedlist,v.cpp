#include <stdio.h>
#include <stdlib.h>

struct node
 {
    int data;
    struct node* next;
};

struct node* head = NULL;

void create();
void display();
void reverse();

int main()
 {
    int choice;

    while (1) {
        printf("\n\n*** MENU ***\n");
        printf("1. Create List\n2. Display List\n3. Reverse List\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: reverse(); break;
            case 4: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}


void create()
 {
    int n, data;
    struct node *newnode, *temp;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    head = NULL;

    for (int i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
}


void display() 
{
    struct node* temp = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void reverse() 
{
    struct node *prev = NULL, *current = head, *next = NULL;

    if (head == NULL) {
        printf("List is empty. Cannot reverse.\n");
        return;
    }

    while (current != NULL) {
        next = current->next;   
        current->next = prev;   
        prev = current;         
        current = next;         
    }

    head = prev;
    printf("List has been reversed.\n");
}


