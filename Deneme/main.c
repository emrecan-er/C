#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
 system("color 9a");
 int sayi, degerler,i;
 printf("Bir sayi degeri giriniz...\n");
 scanf("%d",&sayi);
 for(i=2;sayi>1;i++)
 {
  while(sayi%i==0)
  {

   printf("%d\t",i);
   sayi=sayi/i;

  }
 }
 system("pause");
 return 0;
}
