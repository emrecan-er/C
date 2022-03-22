#include <stdio.h>
#include <stdlib.h>

int main()
{
   int tutar,indirimlitutar;
   int kacgun,yenikacgun;
   char seg;
   printf("Hangi Segmenti kiralamak istersiniz? (A,B,C,D)\n");
   printf(" A segmenti.\n B segmenti.\n C segmenti.\n D segmenti.\n");
   scanf("%c",&seg);
   printf("Lutfen araci kac gun kiralamak istediginizi giriniz.\n");
   scanf("%d",&kacgun);
   if(kacgun>=7)
   {
       yenikacgun=kacgun-(kacgun/7);
   }
   else
   {
       yenikacgun=kacgun;
   }

   switch(seg)
   {
       case 'A':
            printf("%d gun kiralama isteginiz kampanya ile %d gun kabul edilmistir.\n",kacgun,yenikacgun);
           tutar=yenikacgun*900;
           if(tutar>=5000)
           {
               indirimlitutar=tutar-(tutar/20);
               printf("Borcunuz %d,Indirimli tutariniz %d\n",tutar,indirimlitutar);
           }
           else if(tutar>=10000)
           {
               indirimlitutar=tutar-(tutar/10);
               printf("Borcunuz %d,Indirimli tutariniz %d\n",tutar,indirimlitutar);

           }
           else
               printf("Borcunuz : %d",tutar);
       break;
       case 'B':
           printf("%d gun kiralama isteginiz kampanya ile %d gun kabul edilmistir.\n",kacgun,yenikacgun);
               tutar=yenikacgun*800;
           if(tutar>=5000)
           {
               indirimlitutar=tutar-(tutar/20);
               printf("Borcunuz %d,Indirimli tutariniz %d\n",tutar,indirimlitutar);
           }
           else if(tutar>=10000)
           {
               indirimlitutar=tutar-(tutar/10);
               printf("Borcunuz %d,Indirimli tutariniz %d\n",tutar,indirimlitutar);
           }
           else
               printf("Borcunuz : %d",tutar);
       break;
       case 'C':
           printf("%d gun kiralama isteginiz kampanya ile %d gun kabul edilmistir.\n",kacgun,yenikacgun);
               tutar=yenikacgun*700;
           if(tutar>=5000)
           {
               indirimlitutar=tutar-(tutar/20);
               printf("Borcunuz %d,Indirimli tutariniz %d\n",tutar,indirimlitutar);
           }
           else if(tutar>=10000)
           {
               indirimlitutar=tutar-(tutar/10);
               printf("Borcunuz %d,Indirimli tutariniz %d\n",tutar,indirimlitutar);
           }
           else
               printf("Borcunuz : %d",tutar);
       break;
       case 'D':
           printf("%d gun kiralama isteginiz kampanya ile %d gun kabul edilmistir.\n",kacgun,yenikacgun);
               tutar=yenikacgun*600;
           if(tutar>=5000)
           {
               indirimlitutar=tutar-(tutar/20);
               printf("Borcunuz %d,Indirimli tutariniz %d\n",tutar,indirimlitutar);
           }
           else if(tutar>=10000)
           {
               indirimlitutar=tutar-(tutar/10);
               printf("Borcunuz %d,Indirimli tutariniz %d\n",tutar,indirimlitutar);
           }
           else
               printf("Borcunuz : %d",tutar);
       break;
       default :
               printf("Hatali secim yaptiniz.\n");
       break;
   }
    return 0;
}
