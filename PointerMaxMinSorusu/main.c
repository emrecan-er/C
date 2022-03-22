#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10],i;
    int max,min;
    printf("Lutfen 10 adet deger giriniz.\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",dizi+i);
    }
    max=min=*dizi;
    for(i=1;i<10;i++)
    {
        if(*(dizi+i)>max)
        {
            max=*(dizi+i);
        }
        if(*(dizi+i)<min)
        {
            min=*(dizi+i);
        }
    }
    printf("Dizimizin Maksimum Degeri : %d\n",max);
    printf("Dizimizin Minimum Degeri : %d\n",min);
    return 0;
}
