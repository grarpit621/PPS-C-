#include <stdio.h>
int main()
{
    int N, i;
    printf("Enter size of array: ");
    scanf("%d", &N);
    int arr[N];
    int *ptr = arr;
    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = arr;

    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }
    return 0;
}
