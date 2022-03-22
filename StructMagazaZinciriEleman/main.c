#include <stdio.h>
#include <stdlib.h>
struct magazacalisan
{
    char isim[15];
    char soyisim[15];
    int yas;
};



struct urun
{
    int kod;
    int fiyat;
};



struct magaza
{
    char magazaadi[15];
    char sokakadi[20];
    char mahalleadi[20];
    int telefonno;
    float satistutari;
    struct magazacalisan e1;
    struct magazacalisan e2;
    struct magazacalisan e3;
    struct urun p[2];
};


void urunu_olustur(struct urun *pr)
{
    printf("Referans kodu giriniz : ");
    scanf("%d",&pr->kod);
    printf("Fiyat giriniz : ");
    scanf("%d",&pr->fiyat);

}
void calisan_olustur(struct magazacalisan *em)
{
    printf("Calisanin ismi : ");
    scanf("%s",em->isim);
     printf("Calisanin soyadi : ");
    scanf("%s",em->soyisim);
     printf("Calisanin yasi : ");
    scanf("%d",&em->yas);
}
void magazayi_olustur(struct magaza *m)
{
    int i;
    printf("Magaza ismi : ");
    scanf("%s",m->magazaadi);
    printf("Magazanin bulundugu sokak : ");
    scanf("%s",m->sokakadi);
    printf("Magazanin bulundugu mahalle : ");
    scanf("%s",m->mahalleadi);
    printf("Magazanin telefon no : ");
    scanf("%d",&m->telefonno);
    printf("Magazanin satis tutari : ");
    scanf("%f",&m->satistutari);
    printf("Calisan 1 : \n");
    calisan_olustur(&m->e1);
    printf("Calisan 2 : \n");
    calisan_olustur(&m->e2);
    printf("Calisan 3 : \n");
    calisan_olustur(&m->e3);
    for(i=0;i<2;i++)
    {
        printf("Urunlerinizi Giriniz %d :\n",i);
        urunu_olustur(&m->p[i]);
    }

}
void magazayi_bas(struct magaza m)
{
    int i;
    printf("Magazanin ismi : %s\n",m.magazaadi);
    printf("Magazanin bulundugu sokak : %s\n",m.sokakadi);
    printf("Magazanin bulundugu mahalle : %s\n",m.mahalleadi);
    printf("Magazanin telefon no: %d\n",m.telefonno);
    printf("Satis rakami : %f\n",m.satistutari);
    printf("Calisan 1 : \n");
    isciyi_bas(m.e1);
    printf("Calisan 2 : \n");
    isciyi_bas(m.e2);
    printf("Calisan 3 : \n");
    isciyi_bas(m.e3);
    for(i=0;i<2;i++)
    {
        printf("Urun %d : \n",i);
        urunu_bas(m.p[i]);
    }
}
void isciyi_bas(struct magazacalisan e)
{
    printf("Isim : %s\n",e.isim);
    printf("Soyisim : %s\n",e.soyisim);
    printf("Yas : %d\n",e.yas);

}
void urunu_bas(struct urun p)
{
    printf("Referans kodu : %d \n",p.kod);
    printf("Urunun fiyati : %d\n",p.fiyat);
}
void en_yasli(struct magaza m)
{
    struct magazacalisan yasli;
    if(m.e1.yas>yasli.yas)
    {
        yasli=m.e1;
    }
    if(m.e2.yas>yasli.yas)
    {
        yasli=m.e2;
    }
    if(m.e3.yas>yasli.yas)
    {
        yasli=m.e3;
    }
    printf("En yasli isci : %s \n",yasli.isim);
}

int main()
{
    int i;
    struct magaza m[1];
    for(i=0;i<1;i++)
    {
        printf("Magaza %d : \n",i);
        magazayi_olustur(&m->p[i]);
    }
    printf("Magaza %d",1);
    magazayi_bas(m[1]);
    en_yasli(m[1]);
    return 0;
}
