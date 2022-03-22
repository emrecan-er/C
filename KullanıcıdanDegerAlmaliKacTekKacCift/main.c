#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,ciftsayi=0,teksayi=0,a,b;
    printf("Lutfen iki adet deger giriniz\n");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
        if(i%2==0)
    {
        ciftsayi++;
    }
    else
    {
     teksayi++;
    }
    printf("%d ile %d arasinda %d adet cift sayi vardir.\n",a,b,ciftsayi);

    return 0;
}
