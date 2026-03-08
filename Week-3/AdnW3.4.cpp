#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, index;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;   // Pointer pointing to first element

    printf("Enter index to access (0 to %d): ", n - 1);
    scanf("%d", &index);

    if(index >= 0 && index < n)
    {
        printf("Element at index %d is: %d", index, *(ptr + index));
    }
    else
    {
        printf("Invalid index!");
    }

    return 0;
}
