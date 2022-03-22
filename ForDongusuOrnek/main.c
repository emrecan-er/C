#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,ciftsayi=0,teksayi=0;
   for(i=0;i<=10;i++)
   {
       if(i%2==0)
       {
         ciftsayi=ciftsayi+1;
       }
       else
       {
           teksayi=teksayi+1;
       }
   }
   printf("Cift Sayi Adedi =  %d\n",ciftsayi);
        printf("Tek Sayi Adedi =  %d\n",teksayi);
    return 0;
}
