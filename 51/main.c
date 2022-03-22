#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float olcum;
    float aratoplam=0.0,geneltoplam=0.0;
    for(;;)//
    {
        aratoplam=0;
        printf("Olcum sayisi :");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {

            printf("Olcum giriniz :");
            scanf("%f",&olcum);
            aratoplam+=olcum;
            geneltoplam+=olcum;
        }
        if(n!=0)
        printf("Ara toplam %.2f\n",aratoplam);
        if(n==0)
        {
            printf("Genel toplam = %.2f\n ",geneltoplam);
            break;
        }
    }
    return 0;
}
