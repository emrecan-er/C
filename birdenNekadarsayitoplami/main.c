#include <stdio.h>
#include <stdlib.h>

int main()
{
 int sayi,i,sonuc=0;
 printf("Bir sayi giriniz \n");
 scanf("%d",&sayi);
 for(i=1;i<=sayi;i++)
 {
     sonuc=sonuc+i;
 }
 printf("1'den %d'ye kadar olan sayilarin toplami %d'dir",sayi,sonuc);
    return 0;
}
