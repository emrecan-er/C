#include <stdio.h>
#include <stdlib.h>
int faktoriyel(int *sayi)
{
    int carpim=1,i;
    for(i=*sayi;i>=1;i--)
    {
        carpim=carpim*(*sayi);
        (*sayi)--;

    }
    return carpim;

}

int main()
{
    int n,orijinalsayi;
    printf("Lutfen Faktoriyeli Alinacak Sayiyi Giriniz.\n");
    scanf("%d",&n);
    orijinalsayi=n;
    printf("%d!=%d",orijinalsayi,faktoriyel(&n));
    return 0;
}
