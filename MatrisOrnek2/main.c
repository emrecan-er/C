#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dizi1[3][4]={{1,2,3,4},{1,5,4,7},{3,1,5,8}};
    int dizi2[3][4]={{1,5,3,4},{1,4,8,7},{3,1,5,9}};
    int i,j;
    int dizitoplam[3][4];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            dizitoplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
          printf("%4d",dizitoplam[i][j]);
        }
    }
    printf("\n");


    return 0;
}
