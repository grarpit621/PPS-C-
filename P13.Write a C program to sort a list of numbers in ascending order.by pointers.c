#include <stdio.h>
int main()
{
    int n,temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    int *p;
    p=a;
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    scanf("%d",p+i);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    printf("Numbers sorted in ascending order are:-  ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*p+i);
    }
    return 0;
}
