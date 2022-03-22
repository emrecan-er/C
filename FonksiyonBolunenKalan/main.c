#include <stdio.h>
#include <stdlib.h>
void bolmeislemi(int bolunen,int bolen)
{

 int kalan,bolum;
 kalan=bolunen%bolen;
 bolum=bolunen/bolen;
 printf("Kalan = %d  Bolum = %d",kalan,bolum);
}
int main()
{
    int bolunen,bolen;
    printf("Lutfen Bolunen Sayiyi Giriniz.\n");
    scanf("%d",&bolunen);
    printf("Lutfen Bolen Sayiyi Giriniz.\n");
    scanf("%d",&bolen);
    bolmeislemi(bolunen,bolen);
    return 0;
}
