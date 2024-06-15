/*
    Author Ullas S
*/

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;

void display(node* ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

}

node* insertBeg(node* head, int ele) {
    node* ptr = (node*)malloc(sizeof(node));
    ptr->data = ele;
    ptr->next = head;
    return ptr;
}

node* insertIndex(node* head, int ele, int index) {
    node* ptr = (node*)malloc(sizeof(node));
    ptr->data = ele;
    int i = 0;
    node* p = head;

    while (i != index - 1)
    {
        i++;
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;

    return head;

}

node* insertEnd(node* head, int ele) {
    node* ptr = (node*)malloc(sizeof(node));
    ptr->data = ele;
    node* p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}
int main() {
    
    node* head = (node*)malloc(sizeof(node));
    node* first = (node*)malloc(sizeof(node));
    node* second = (node*)malloc(sizeof(node));
    node* third = (node*)malloc(sizeof(node));
    node* fourth = (node*)malloc(sizeof(node));

    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = NULL;

    printf("Elements before are\n");
    display(head);

    head = insertBeg(head, 91);

    printf("\nElements after insertBeg are\n");
    display(head);

    head = insertIndex(head, 92, 2);

    printf("\nElements after insertIndex are\n");
    display(head);

    head = insertEnd(head, 93);
    printf("\nElements after insertEnd are\n");
    display(head);

    free(head);
    free(first);
    free(second);
    free(third);
    free(fourth);

    return 0;
}