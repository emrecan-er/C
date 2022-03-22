#include <stdio.h>
#include <stdlib.h>

int main()
{
   int kacgun;
   char seg;
   printf("Lutfen araci ka gun kiralamak istediginizi giriniz.\n");
   scanf("%d",&kacgun);
   printf("Hangi Segmenti kiralamak istersiniz? (A,B,C,D)\n");
   printf("A segmenti.\n B segmenti.\n C segmenti.\n D segmenti.\n");
   scanf("%c",&seg);
   switch(seg)
   {
       case 'A':
           {
               printf("Borcunuz : %d",kacgun*900);
           }
       break;
       case 'B':
           {
               printf("Borcunuz : %d",kacgun*800);
           }
       break;
       case 'C':
           {
               printf("Borcunuz : %d",kacgun*700);
           }
       break;
       case 'D':
           {
               printf("Borcunuz : %d",kacgun*500);
           }
       break;
       default :
           {
               printf("Hatali secim yaptiniz.\n");
           }
       break;
   }




    return 0;
}
