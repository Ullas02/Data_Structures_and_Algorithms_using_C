/*
    Author Ullas S
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} node;

void display(node* ptr)
{
    printf("Elements in the linked list are:\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

node* deleteAtBeg(node* head) {
    node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

node* deleteAtIndex(node* head, int index) {
    node* p = head;
    node* q = head->next;
    int i = 0;
    while (i < index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}

node* deleteAtEnd(node* head) {
    node* p = head;
    node* q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

int main()
{
    node* head = (node*)malloc(sizeof(node));
    node* second = (node*)malloc(sizeof(node));
    node* third = (node*)malloc(sizeof(node));
    node* fourth = (node*)malloc(sizeof(node));

    head->data = 12;
    head->next = second;

    second->data = 43;
    second->next = third;

    third->data = 54;
    third->next = fourth;

    fourth->data = 87;
    fourth->next = NULL;

    printf("Before deletion\n");
    display(head);

    head = deleteAtBeg(head);
    head = deleteAtIndex(head, 2);
    head = deleteAtEnd(head);

    printf("\nAfter deletion\n");
    display(head);

    return 0;
}