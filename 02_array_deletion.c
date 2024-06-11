/*
    Author Ullas S
*/

// Deletion of an element in an array by passing index

#include <stdio.h>

void deletionByIndex(int arr[], int size, int max, int index)
{
    if (index < 0 || index >= size)
    {
        printf("\nError...invalid index\n");
        return;
    }

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("Element %d deleted at successfully\n", arr[index]);
}

void show(int arr[], int size, int max, int index)
{
    if (index < 0 || index >= size)
    {
        printf("\nError...invalid index\n");
        return;
    }

    printf("Elements in the array are\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n, max = 50, index;
    int a[50];

    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter %d array elements\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position : ");
    scanf("%d", &index);

    printf("\nBefore deletion\n");
    show(a, n, max, index);

    printf("\nAfter deletion\n");
    deletionByIndex(a, n, max, index);
    n -= 1;
    show(a, n, max, index);

    return 0;
}