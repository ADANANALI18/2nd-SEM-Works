#include <stdio.h>

#define MAX 25

void display(int arr[], int n)
{
    int i;
    if(n == 0)
    {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insert(int arr[], int *n)
{
    int element, position, i;

    if(*n >= MAX)
    {
        printf("Array is full. Cannot insert.\n");
        return;
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position (0 to %d): ", *n);
    scanf("%d", &position);

    if(position < 0 || position > *n)
    {
        printf("Invalid position.\n");
        return;
    }

    for(i = *n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    (*n)++;

    printf("Element inserted successfully.\n");
}

void deletee(int arr[], int *n)
{
    int position, i;

    if(*n == 0)
    {
        printf("Array is empty. Cannot delete.\n");
        return;
    }

    printf("Enter position to delete (0 to %d): ", *n - 1);
    scanf("%d", &position);

    if(position < 0 || position >= *n)
    {
        printf("Invalid position.\n");
        return;
    }

    for(i = position; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*n)--;

    printf("Element deleted successfully.\n");
}

int main()
{
    int arr[MAX];
    int n = 0;
    int choice;

    do
    {
        printf("\n----- MENU -----\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Display array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insert(arr, &n);
                break;

            case 2:
                delete(arr, &n);
                break;

            case 3:
                display(arr, n);
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}
