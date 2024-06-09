/*
    Author Ullas S
*/

//Insertion of an element in an array by passing index

#include <stdio.h>

void insertionByIndex(int arr[], int size, int ele, int max, int index)
{
    if (size >= max)
    {
        printf("Error...array out of bound\n");
        return;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = ele;
    printf("Element inserted at %d index successfully\n", index);
}

void show(int arr[], int size)
{
    printf("Elements in the array are\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n, max = 50, ele, index;
    int a[max];

    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter %d array elements\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the element to insert : ");
    scanf("%d", &ele);
    printf("Enter the position : ");
    scanf("%d", &index);

    printf("\nBefore inertion\n");
    show(a, n);

    printf("\nAfter inertion\n");
    insertionByIndex(a, n, ele, max, index);
    n += 1;
    show(a, n);

    return 0;
}