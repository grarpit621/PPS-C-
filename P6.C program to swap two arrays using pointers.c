#include<stdio.h>
int main()
{
    int n,*p,*q;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    p=arr1;
    q=arr2;
    printf("Enter element of Array 1: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("Enter element of Array 2: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",q+i);
    }
    for(int i=0;i<n;i++)
    {
        int temp;
        temp=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=temp;
    }
    printf("Elements of Array 1 are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\nElements of Array 2 are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(q+i));
    }
    return 0;
}
