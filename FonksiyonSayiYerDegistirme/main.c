#include <stdio.h>
#include <stdlib.h>
void yerdegistirme(int x,int y)
{
    int gecici;
    gecici=x;
    x=y;
    y=gecici;
    printf("Son Durum : x=%d y=%d\n",x,y);
}

int main()
{
    int x,y;
    printf("Lutfen Iki Adet Sayi Giriniz\n");
    scanf("%d %d",&x,&y);
    printf("Ilk Durum : x=%d  y=%d\n",x,y);
    yerdegistirme(x,y);
    return 0;
}
