#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dizi[4],i,sonuc;
   i=0;
   while (i<4)
   {
    printf("Lutfen bir sayi giriniz \n");
    scanf("%d",&dizi[i]);
    i++;
   }
   sonuc=0;
   for(i=0;i<4;i++)
   {
      sonuc=sonuc+dizi[i];
   }
   printf("Sonuc=  %d  ",sonuc);
    return 0;
}
