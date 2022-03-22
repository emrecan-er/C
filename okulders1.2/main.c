#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//disaridan p veya P harf notunu giriniz h girene kadar Aa4 Bb3 Cc2 Ff0
int main()
{
    int puan,sayac=0;
    float ortalama;
    char harf;
    printf("Lutfen Harf Giriniz:");
    while(harf!='h' && harf!='H')
    {
        scanf("%c",&harf);
        switch(harf)
        {
            case 'A':puan=puan+4;
            sayac++;
            case 'a':puan=puan+4;
            sayac++;
            case 'B':puan=puan+3;
            sayac++;
            case 'b':puan=puan+3;
            sayac++;
            case 'C':puan=puan+2;
            sayac++;
            case 'c':puan=puan+2;
            sayac++;
            case 'F':puan=puan+0;
            sayac++;
            case 'f':puan=puan+0;
            sayac++;
            default:
            break;
        }
    }
    ortalama=puan/sayac;
    printf("Ortalama=%.2f",ortalama);

    return 0;
}



