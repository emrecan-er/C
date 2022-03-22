#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya=fopen("bilgi.txt","a");
    int i;
    char cumle[100];

    if(dosya==NULL)
    {
        printf("Dosya Bulunamadi...");
    }
    else
    {
        printf("Lutfen bir cumle giriniz : ");
        gets(cumle);
        for(i=0;cumle[i];i++)
        {
            putc(cumle[i],dosya);
        }
        putc('\n',dosya);

    }
    printf("Bilgiler basariyla eklendi!!\n");







    fclose(dosya);

    return 0;
}
