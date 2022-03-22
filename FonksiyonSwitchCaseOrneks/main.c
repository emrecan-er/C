#include <stdio.h>
#include <stdlib.h>
float calcul(float bir,float iki,char operasyon)
{
    float islemsonucu;
    switch(operasyon)
    {
    case '+' :
        {
            islemsonucu=bir+iki;
            break;

        }
    case '-' :
         {
             islemsonucu=bir-iki;
             break;
         }
    case '/' :
        {
            islemsonucu=bir/iki;
            break;
        }
    case '*' :
        {
            islemsonucu=bir*iki;
        }
        }
        return islemsonucu;

    }



int main()
{
    float birincisayi,ikincisayi,sonuc;
    char islem;
    printf("Hangi islemi yapmak istiyorsunuz.\n");
    scanf("%c",&islem);
    printf("Lutfen iki adet sayi giriniz.\n");
    scanf("%f %f",&birincisayi,&ikincisayi);
    sonuc=calcul(birincisayi,ikincisayi,islem);
    printf("%.2f %c %.2f = %.2f",birincisayi,islem,ikincisayi,sonuc);
    return 0;
}
