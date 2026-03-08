#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Point pointer to first element of array
    ptr = arr;

    printf("\nArray elements using pointer:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
} 
