#include <stdio.h>
int main()
{
    printf("ENTER NO.OF ROWS-");
    int r,c;
    scanf("%d",&r);
    printf("ENTER NO. OF COLUMNS-");
    scanf("%d",&c);
    int matrix[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("ENTER ELEMENT OF MATRIX[%d][%d]",i,j);
            scanf("%d", (*(matrix + i) + j));
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("ELEMENT OF MATRIX[%d][%d] is %d \n",i,j,*(*(matrix + i) + j));
        }
    }
}
