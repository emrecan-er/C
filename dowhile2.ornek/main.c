#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float sonuc;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sonuc=sonuc+(float)1/i;
    }
    printf("Sonuc = %.2f",sonuc);
    return 0;
}
