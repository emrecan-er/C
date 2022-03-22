#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int *pointer;
    int i;
    printf("Dizimizin ilk hali.\n");
    for(i=0;i<15;i++)
    {
        printf("%4d",*(dizi+i));
    }
    printf("\n");
    printf("Dizimizin cift elemanlari.\n");
    for(i=0;i<15;i+=2)
    {
        printf("%4d",*(dizi+i));
    }
    printf("\n");
     printf("Dizimizin tek elemanlari.\n");
     for(i=1;i<15;i+=2)
    {
        printf("%4d",*(dizi+i));
    }
    return 0;
}
