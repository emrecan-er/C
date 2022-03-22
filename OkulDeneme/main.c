#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,j;
    int dizi[1];
    srand(time(0));
    for(i=0;i<1;i++)
    {
        dizi[i]=rand()%100;
    }
    for(j=0;j<10;j++)
    {
        printf("Lutfen bir deger giriniz : \n");
        scanf("%d",&k);
        if(k==dizi[i])
        {
            printf("Tebrikler!!!");
        }
        else if (k>dizi[i])
        {
            printf("Asagi \n");
        }
        else
        {
           printf("Yukari \n");
        }
    }
    return 0;
}
