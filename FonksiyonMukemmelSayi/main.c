#include <stdio.h>
#include <stdlib.h>
/* Kendisi hariç pozitif tam sayý bölenlerinin toplamý kendisine eþit olan sayýlara mükemmel sayi denir*/
int mukemmel(int n)
{
    int i=1,toplam=0;
    while(i<n)
    {
        if(n%i==0)
        {
            toplam=toplam+i;
        }
       i++;
    }
    if(toplam==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}







int main()
{
    int sayi,sonuc;
    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d",&sayi);
    sonuc=mukemmel(sayi);
    if(sonuc==1)
    {
        printf("Sayi gercekten mukemmel.\n");
    }
    else
    {
        printf("Sayi mukemmel degil\n");
    }

          return 0;
}
