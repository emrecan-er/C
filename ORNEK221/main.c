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
    printf("%d gun kiralama isteginiz kampanya ile %d gun kabul edilmistir.\n",kacgun,yenikacgun);
   switch(seg)
   {
       case 'A':
    tutar=yenikacgun*900;
       break;
       case 'B':
               tutar=yenikacgun*800;
       break;
       case 'C':
               tutar=yenikacgun*700;
       break;
       case 'D':
               tutar=yenikacgun*600;
       break;
       default :
               printf("Hatali secim yaptiniz.\n");
       break;
   }
   if(10000>tutar && tutar>=5000)
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
    return 0;
}
