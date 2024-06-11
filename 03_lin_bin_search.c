/*
    Author Ullas S
*/

// Linear search and Binary search in an array

#include <stdio.h>

int linearSearch(int arr[], int size, int ele)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int ele)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == ele)
        {
            return mid;
        }
        else if (arr[mid] < ele)
        {
            low = mid + 1;
        }
        else if (arr[mid] > ele)
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {13, 43, 54, 223, 452};
    int size = sizeof(arr) / sizeof(int);
    int ele = 43;

    printf("%d element found at %d index\n", ele, binarySearch(arr, size, ele));

    return 0;
}