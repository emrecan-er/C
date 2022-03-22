#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Bir sayi giriniz \n");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("Iki sayi biribirine esittir \n");

    }
    if (a<b)
    {
        printf("%d sayisi daha buyuktur \n",b);
    }
    if (b<a)
    {
        printf("%d sayisi daha buyuktur \n",a);
    }
    return 0;
}
