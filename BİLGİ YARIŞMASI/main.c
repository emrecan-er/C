#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int girisyapfonk()
{
    int secim,scm;
    int kontrol=0;
    char kullaniciadi1[20],sifre1[20];
    char kullaniciadi2[20],sifre2[20];
    for(;;)
    {
    printf("\n1)Giris Yap\n2)Kayit Ol\n");
    scanf("%d",&secim);
     if(secim==1)
     {
          printf("Kullanici Adi:");
         scanf("%s",&kullaniciadi2);
         printf("Sifre:");
         scanf("%s",&sifre2);
         printf("\nKayitli Kullanici Bulunamadi Lutfen Kayit Olunuz.\n");

     }
     else if(secim==2)
     {
         printf("Kullanici Adi:");
         scanf("%s",&kullaniciadi1);
         printf("\nSifre:");
          int p=0;
    do{
        sifre1[p]=getch();
        if(sifre1[p]!='\r'){
            printf("*");
        }
        p++;
    }while(sifre1[p-1]!='\r');
    sifre1[p-1]='\0';
         printf("\n==================================================================================\n\n==================================================================================");
         printf("\nLutfen Giris Yapiniz.\n");
         printf("Kullanici Adi:");
         scanf("%s",&kullaniciadi2);
         printf("Sifre:");
          int a=0;
    do{
        sifre2[a]=getch();
        if(sifre2[a]!='\r'){
            printf("*");
        }
        a++;
    }while(sifre2[a-1]!='\r');
    sifre2[a-1]='\0';
    printf("\n");
         while(kontrol==0)
         {
             if(strcmp(kullaniciadi1,kullaniciadi2)==0 &&strcmp(sifre1,sifre2)==0)
       {
           printf("Yonlendiriliyorsunuz...\n");
           printf("Yonlendiriliyorsunuz...\n");
           printf("\nSisteme Hosgeldiniz.\n");
           kontrol=1;
           yarismafonk();
       }
       else
       {
           printf("Hatali Giris!!\n\n");
           kontrol=1;
       }

         }
     }
     else
     {
         printf("Hatali Secim Yaptiniz.\n");
     }
    }
     return secim;
}
int yarismafonk()
{
char cevap[20];
    int puan=0;
    printf("Yarisma Basladi...\n");
    printf("Puaniniz : %d\n",puan);
    printf("\n\n");
    if(puan==0)
    {
    printf("{Soru-1}->Asagidakilerden hangisi Turkiye Cumhuriyetinin baskentidir?\n");
    printf("a-Istanbul  b-Ankara  c-Amasya  d-Edirne  e-Izmir\n");
    scanf("%s",&cevap);
    if(strcmp(cevap,"b")==0)
    {

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
    }
    else
    {
        printf("Yanlis Cevap...\n");
        printf("Puaniniz : %d \n",puan);
        return 05;

    }
    }
    if(puan==10)
    {
    printf("\n\n");
    printf("{Soru-2}->Asagidakilerden hangisi Rusyanin baskentidir?\n");
    printf("a-Moskova  b-Berlin  c-Hakkari  d-Zenit  e-Varsova\n");
    scanf("%s",&cevap);
    if(strcmp(cevap,"a")==0)
    {

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
    }
    else
    {
        printf("Yanlis Cevap...\n");
        printf("Puaniniz : %d \n",puan);
        break;

    }
    }if(puan==20)
    {
    printf("\n\n");
    printf("{Soru-3}->Asagidakilerden hangisi dunyanin en guzel sehridir?\n");
    printf("a-AMASYA05  b-Kayseri  c-Sivas  d-Samsun  e-Hakkari\n");
    scanf("%s",&cevap);
    if(strcmp(cevap,"a")==0)
    {

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
    }
    else
    {
        printf("Yanlis Cevap...\n");
        printf("PUUUUUUU\n");
        printf("Puaniniz : %d \n",puan);
        break;

    }
    if(puan==30)
    {
        printf("70 PUANLIK DEV SORU!!!\n\n");
     printf("\n\n");
    printf("{Soru-3}->Asagidakilerden hangisi emircanin en sevdigi arkadasidir\n");
    printf("a-Ilayda Karakus  b-Esra Salgam  c-Humeyra  d-TOBB Arabasi olan kiz  e-Kayra(Muhammet Ihsan)\n");
    scanf("%s",&cevap);
    if(strcmp(cevap,"e")==0)
    {

        printf("Dogru Cevap...\n");
        puan+=70;
        printf("Puaniniz : %d \n",puan);
    }
    else
    {

        printf("Yanlis Cevap...\n");
        printf("PUUUUUUU\n");
        printf("Puaniniz : %d \n",puan);
        break;

    }

    }
    if(puan==100)
    {
        int scm;
        printf("Lutfen Hediyenizi Secin.\n");
        printf("1)AMASYA ELMA\n");
        printf("2)PASTIRMA\n");
         printf("3)SIVAS KANGAL SUCUK\n");
         printf("4)IMAM BAYILDI\n");
         scanf("%d",&scm);
         break;

    }
    }

    return puan;
}


int main()
{
    int secim;
    char kullaniciadi1[20],sifre1[20];
    char kullaniciadi2[20],sifre2[20];
    printf("***Bilgi Yarismasina Hosgeldiniz.***\n\n\nBaslamadan Once Lutfen Kurallari Okuyunuz.\n\n\nKurallar:\n1)Yarismaya baslamadan **ONCE KAYIT OLUNUZ** aksi takdirde oyun baslamayacaktir...\n2)Yarisma puan hesaplidir 100 puanin uzerinde olursaniz hediye kazanma sansiniz vardir...\n");
    printf("\n\n Lutfen kullanici adinizi Turkce Karakter ile girmeyiniz ve bosluk birakmayiniz.(Ornek:'emrecamet,emrecan_er')\n");
    printf("Lutfen Secim Yapiniz\n");
     girisyapfonk();


    return 0;



}
