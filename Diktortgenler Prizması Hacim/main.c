#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,h;
    printf("DIKDORTGENLER PRIZMASI ALAN,HACIM,YANAL ALAN HESAPLAMA ROBOTU\n");
    printf("Lutfen dikdortgenin kenarlarý (a,b) ve yuksekligini giriniz (h)\n");
    scanf("%d%d%d",&a,&b,&h);
    printf("Dikdortgenler prizmasinin:\n");
    printf("Taban Alani %d\n",a*b);
    printf("Yanal Alanlar Toplami %d\n",(a*h+b*h)*2);
    printf("Hacmi %d\n",a*b*h);
    printf("Toplam Alani %d\n",2*a*b+2*a*h+2*b*h);
    return 0;
}
