#include <stdio.h>
#include <stdlib.h>

double karekokbul(double n)
{
    double karekok;
    int i;
    if(n>0.0)
    {
        karekok=n/2;
        for(i=0;i<50;i++)
        {
            karekok=((karekok*karekok)+n)/(karekok*2);
        }
        return karekok;
    }
    else if (n==0)
    {
        return 0;
    }
    else
    {
        printf("Hatali Deger Girdiniz\n");
    }
}
int main()
{
double sayi;
printf("Karekoku Bulunacak Sayiyi Giriniz.\n");
scanf("%lf",&sayi);
printf("%.4lf karekoku =  %.4lf \n",sayi,karekokbul(sayi));
return 0;
}
