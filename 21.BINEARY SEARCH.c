#include <stdio.h>
int main()
{
    int i,big,end,mid,n,a,element;
    printf("ENTER LENGTH-");
    scanf("%d",&n);
    printf("ENTER ELEMENTS-\n");
    int arr[n];
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&a);
        arr[i]=a;
    }
    printf("ENTER ELEMENT TO BE SEARCHED-");
    scanf("%d",&element);
    big=0;
    end=n-1;
    while (big<=end){
      int mid=big+(end-big)/2;
      if (arr[mid]==element)
         printf("ELEMENT FOUND AT:%d",mid);
      if (arr[mid]<element)
         big=mid+1;
      else
         end=mid-1;
   }
    return 0;
}