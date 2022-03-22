#include <stdio.h>
#include <stdlib.h>

int main()
{/*
    int n;
    int i;
    int max;
    printf("Personel sayisini giriniz:");
    scanf("%d",&n);
    int dizi[n][2];
    for(i=0;i<n;i++)
    {
        printf("%d. personelin sicil numarasi : ",i+1);
        scanf("%d",&dizi[i][0]);
        printf("%d. personelin satis sayisi :",i+1);
        scanf("%d",&dizi[i][1]);
        max=dizi[i][1];
        if(dizi[i][1]>max)
        {
            max=dizi[i][1];
        }

    }
    printf("\n\nSicil No\tSatis Miktari\n");

   for(i=0;i<n;i++)
   {
        printf("%d\t\t%d\t\t\t Tamamlamasi gereken fark:%d\n",dizi[i][0],dizi[i][1],max-dizi[i][1]);
   }
*/

    int n;
    int i;
    int min;
    printf("Kac adet il girilecek? (max 50 adet) : ");
    scanf("%d",&n);
    int iller[n][2];
    for(i=0;i<n;i++)
    {
    printf("%d. ilin plakasini ve destek miktarini giriniz : ",i+1);
    scanf("%d %d",&iller[i][0],&iller[i][1]);
    min=iller[0][1];
    if(iller[i][1]<min)
    {
        min=iller[i][1];
    }
    }
    printf("\nEn az destek alan ile gore , illerin fazlalari \n");
    printf("Il : \t");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t",iller[i][0]);
    }
    printf("\nFazla : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t",iller[i][1]-min);

    }









    return 0;
}
