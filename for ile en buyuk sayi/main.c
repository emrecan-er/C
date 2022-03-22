#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dizi[10],i,max,min;
   printf("Lutfen 10 tane sayi giriniz \n");
   for(i=0;i<10;i++)
   {
       scanf("%d",&dizi[i]);
   }
   max=min=dizi[0];
   for(i=1;i<10;i++)
   {
       if(dizi[i]>max)
       {
           max=dizi[i];
       }
      if(dizi[i]<min)
       {
           min=dizi[i];
       }
   }
    printf("Dizinin en buyuk elemani = %d \n",max);
    printf("Dizinin en kucuk elemani = %d \n",min);
    return 0;
}
