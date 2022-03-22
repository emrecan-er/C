#include <stdio.h>
#include <stdlib.h>

int main()
{
   char karakter;
   printf("Lutfen buyuk harfli bir karakter giriniz.\n");
   scanf("%c",&karakter);
   if((karakter>='A')&&(karakter<='Z'))
   {
       printf("%c",tolower(karakter));

   }
   else
   {
       printf("HATA !!!");
   }


    return 0;
}
