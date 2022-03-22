#include <stdio.h>
#include <stdlib.h>

int main()
{
    int emre[10],i;
    for (i=0;i<10;i++)
    {
        emre[i]=2*i;
    }
    for (i=0;i<10;i++)
    {
        printf("%d\n",emre[i]);
    }
    return 0;
}
