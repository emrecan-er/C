#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas;
    int sayac=0;
    int min=0;
    int yassayac=1;

   while(1)
   {
       printf("Yasi giriniz (Durdurmak icin 0): ");
       scanf("%d",&yas);
       sayac++;
       if(sayac==1)
       {
         if(yas!=0)
        {
            min=yas;
        }
       }
       else
       {
           if(yas<=min)
           {
                if(yas!=0)
                {
                  min=yas;
                  yassayac++;
                }

           }

       }

       if(yas<0 || yas>=100)
       {
           printf("Hata!! Lutfen yas degerine dikkat ediniz.\n");
       }
       if(yas==0)
       {
           break;
       }
   }
    printf("En genc katilimci yasi %d\n",min);
    printf("(Bu yasta toplam %d kisi giris yapti.)",yassayac);


    return 0;
}
