#include <stdio.h>
int main()
{
    int n,temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("MINIMUM NUMBER IS- %d\n",a[0]);
    printf("MAXIMUM NUMBER IS- %d\n",a[n-1]);
    return 0;
}
