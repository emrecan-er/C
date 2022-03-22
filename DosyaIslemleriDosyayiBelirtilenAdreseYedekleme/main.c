#include <stdio.h>
#include <stdlib.h>



//dosyalar arasi kopyalama yapmak
int main()
{
    FILE *giris,*cikis;
    char kaynak[50],hedef[50],karakter;

    printf("Lutfen yedeklenecek dosyanin adini ve uzantisini giriniz : ");
    gets(kaynak);
    giris=fopen(kaynak,"r");
    if(giris==NULL)
    {
        printf("Yedeklenecek dosya bulunamadi ... ");
        exit(1);
    }
    printf("Lutfen yedeklenecek dosyanin yerini , dosya adini uzantisini giriniz : ");
    gets(hedef);

    cikis=fopen(hedef,"w");
    if(cikis==NULL)
    {
        printf("Dosya Olusturulamadi ... ");
        exit(1);
    }
    for(karakter=getc(giris);karakter!=EOF;karakter=getc(giris))
    {
        putc(karakter,cikis);
    }
    fclose(giris);
    fclose(cikis);
    printf("Kopyalama Islemi Tamamlandi ... ");


    return 0;
}
