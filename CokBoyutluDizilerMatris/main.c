#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[20][20];
    int i,j;
    for(i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
            if(i==j)
                dizi1[i][j]=1;
                 else
        {
            dizi1 [i][j]=0;
        }
        }

    }
    for(i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
            printf("%4d",dizi1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
