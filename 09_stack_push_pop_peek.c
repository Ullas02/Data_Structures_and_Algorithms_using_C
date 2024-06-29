/*
    Author Ullas S
*/

// Implementation of stack and demonstration of push(), pop() and peek() operations

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

void push(stack* ptr, int ele) {
    if (isFull(ptr))
    {
        printf("Stack overflow...%d cannot be pushed\n", ele);
        return;
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top] = ele;
        printf("%d pushed successully\n", ele);
    }

}

int pop(stack* ptr) {
    if (isEmpty(ptr))
    {
        printf("Stack underflow\n");
        return -1;
    }
    else {
        int pop_val = ptr->arr[ptr->top];
        ptr->top--;
        return pop_val;
    }
}

void display(stack* ptr) {
    if (isEmpty(ptr))
    {
        printf("Stack underflow\n");
        return;
    }
    else {
        for (int i = ptr->top; i >= 0; i--)
        {
            printf("%d ", ptr->arr[i]);
        }
    }
}

int peek(stack* ptr, int i) {
    int arrInd = ptr->top - i + 1;
    if (arrInd < 0) {
        printf("Invalid index\n");
        return -1;
    }
    else {
        return ptr->arr[arrInd];
    }
}

int main() {

    stack* s = (stack*)malloc(sizeof(stack));
    int op, val, peek_ele;

    s->size = 10;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));

    while (1) {
        printf("\nStack operations\n1.Push 2.Pop 3.Display 4.Peek 5.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Enter the element to be pushed : ");
            scanf("%d", &val);
            push(s, val);
            break;

        case 2:

            if (isEmpty(s))
            {
                printf("Stack underflow\n");
                exit(0);
            }

            printf("Popped element is : %d\n", pop(s));
            break;

        case 3:
            printf("Elements in the stack are :\n");
            display(s);
            break;

        case 4:
            printf("Enter the position to peek : ");
            scanf("%d", &peek_ele);
            printf("Peeked element : %d\n", peek(s, peek_ele));
            break;

        case 5:
            exit(0);

        default:
            break;
        }
    }

    free(s);

    return 0;
}
