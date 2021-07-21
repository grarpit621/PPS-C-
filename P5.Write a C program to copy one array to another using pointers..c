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
    for(int i=0;i<n;i++)
    {
        *(q+i)=*(p+i);
    }
    printf("Elements of Array 2 is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(q+i));
    }
    return 0;
}
