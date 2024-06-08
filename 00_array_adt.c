/*
    Author Ullas S
*/

//Implemenation of array as an ADT 

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int total_size;
    int used_size;
    int *ptr;
} myArray;

void createArray(myArray *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
    printf("Memory allocated for array\n");
}

void setValue(myArray *a)
{
    int n;
    printf("Enter the %d elements : \n", a->used_size);
    for (int i = 0; i < a->used_size; i++)
    {
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
    printf("Values set for the array\n");
}

void show(myArray *a)
{
    printf("The elements in the array are :\n");
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d ", a->ptr[i]);
    }
    printf("\n");
}

int main()
{
    myArray marks;

    createArray(&marks, 10, 3);

    setValue(&marks);

    show(&marks);

    free(marks.ptr);
    printf("Memory freed\n");

    return 0;
}