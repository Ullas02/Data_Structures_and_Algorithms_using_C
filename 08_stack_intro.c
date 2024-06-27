/*
    Author Ullas S
*/

// Implementation of stack and demonstration of isEmpty() and isFull() function

#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
    int size;
    int top;
    int* arr;
}stack;

int isEmpty(stack* ptr) {
    if (ptr->top == -1)
    {
        return 1;
    }
    else {
        return 0;
    }

}

int isFull(stack* ptr) {
    if (ptr->top == ptr->size - 1) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {

    stack* s = (stack*)malloc(sizeof(stack));

    s->size = 10;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));

    if (isEmpty(s)) {
        printf("Stack is empty\n");
    }
    else {
        printf("Stack is not empty\n");

    }

    free(s);

    return 0;
}