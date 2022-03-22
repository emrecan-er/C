#include <stdio.h>
#include <stdlib.h>

int topla(int emre,int can)
{
    return emre+can;
}

int main()
{
    int a,b;
    printf("Lutfen iki adet sayi giriniz\n");
    scanf("%d %d",&a,&b);
    printf("Sayilarin toplami %d",topla(a,b));
    return 0;
}
