#include <stdio.h>
int main()
{
    printf("ENTER NO.OF ROWS-");
    int r,c;
    scanf("%d",&r);
    printf("ENTER NO. OF COLUMNS-");
    scanf("%d",&c);
    int matrix1[r][c];
    int matrix2[r][c];
    int resultmatrix[r][c];
    printf("ENTER 1ST MATRIX ELEMENTS-\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("ENTER ELEMENT OF MATRIX1[%d][%d]",i,j);
            scanf("%d",(*(matrix1 + i) + j));
        }
    }
    printf("ENTER 2ND MATRIX ELEMENTS-\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("ENTER ELEMENT OF MATRIX2[%d][%d]",i,j);
            scanf("%d",(*(matrix2 + i) + j));
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            *(*(resultmatrix + i) + j) = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("RESULT MATRIX [%d][%d] is %d \n",i,j,*(*(resultmatrix + i) + j));
        }
    }
}
