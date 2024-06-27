/*
    Author Ullas S
*/

// Implementation of Circular Linked List

#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data;
    struct node* next;
} node;

node* first = NULL;
node* last = NULL;

void insert(int ele) {
    node* ptr = (node*)malloc(sizeof(node));
    ptr->data = ele;
    ptr->next = NULL;

    if (first == NULL)
    {
        first = last = ptr;
        last->next = first;
    }

    else {
        last->next = ptr;
        last = ptr;
        last->next = first;
    }
}

void display() {
    node* ptr = first;
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != first);

    printf("\n");
}

int main() {
    int op, num1;
    while (1)
    {
        printf("\n1.Insertion 4.Print 5.Exit\n");
        printf("Enter your option : ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Enter the element to be inserted : ");
            scanf("%d", &num1);
            insert(num1);
            printf("%d inserted successfully\n", num1);
            break;

        case 4:
            printf("Elements in circulat linked list are :\n");
            display();
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid option\n");
            break;
        }
    }
    return 0;
}
