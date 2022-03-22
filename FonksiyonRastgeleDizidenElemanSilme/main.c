#include <stdio.h>
#include <stdlib.h>
void kayitsil(int A[],int sira,int elemansayisi)
{
    int i;
    if(sira>=elemansayisi+1)
    {
        printf("Gecerli Bir Sira No Giriniz .\n");
    }
    else
    {

    for(i=sira-1;i<elemansayisi-1;i++)
    {
        A[i]=A[i+1];
    }
    printf("Kayit Silindikten Sonraki Durum : \n");
    for(i=0;i<elemansayisi-1;i++)
    {
        printf("%d \n",A[i]);
    }
    }
}
int main()
{
    int n,i,sirano;
    printf("Kac Adet Sayi Uretilsin?\n");
    scanf("%d",&n);
    printf("\n\n");
    int dizi[n];
    srand(time(0));
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d \n",dizi[i]);
    }
    printf("\n\n\n");
    printf("\n Silinecek degerin sira numarasini giriniz \n");
    scanf("%d",&sirano);
    kayitsil(dizi,sirano,n);



    return 0;
}
