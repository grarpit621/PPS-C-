#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    int *left = arr;
    int *right;
    right = &arr[size - 1];
    printf("Enter elements in array: ");
    while(left <= right)
    {
        scanf("%d", left++);
    }
    printf("\nArray before reverse:\n");
    for (int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    left = arr;
    while(left < right)
    {
        int temp;
        temp= *right;
        *right= *left;
        *left= temp;
        left++;
        right--;
    }
    printf("\nArray after reverse:\n");
    for (int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
