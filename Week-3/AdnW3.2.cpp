#include <stdio.h>

#define MAX 100

void mergeSorted(int arr1[], int n1, int arr2[], int n2, int result[])
{
    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j])
        {
            result[k] = arr1[i];
            i++;
        }
        else
        {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    
    while(i < n1)
    {
        result[k] = arr1[i];
        i++;
        k++;
    }

    
    while(j < n2)
    {
        result[k] = arr2[j];
        j++;
        k++;
    }
}

void display(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr1[MAX], arr2[MAX], result[MAX];
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    mergeSorted(arr1, n1, arr2, n2, result);

    printf("\nMerged Sorted Array:\n");
    display(result, n1 + n2);

    return 0;
}
