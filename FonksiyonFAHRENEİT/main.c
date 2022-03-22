#include <stdio.h>
#include <stdlib.h>

float FdenCye(float f)
{
    return (0.5555)*(f-32);
}

float CdenFye(float c)
{
    return (1.8*c)+32;
}




int main()
{
    /*Kullanýcý tarafýndan derece olarak girilen bir deðerin Fayrenayt'a,Fayrenayt olarak
    girilen bir deðerin dereceye dönüþtürülmesini saðlayan C programýný fonksiyon kullanarak
    yazýnýz

    f=(1.8*c)+32    c=(5/9)*(F-32)*/
    float f,c,secim;
    printf("1 Fahrenayt => Celcius\n");
    printf("2 Cekcius => Fahrenayt\n");
    scanf("%f",&secim);
    if(secim==1)
    {

        printf("Lutfen Fahrenayt degerini giriniz\n");
        scanf("%f",&f);
        printf("%f F = %f C dur\n",f,FdenCye(f));
    }
    else if(secim==2)
    {

        printf("Lutfen Celcius degerini giriniz\n");
        scanf("%f",&c);
        printf("%f C =%f F dir\n",c,CdenFye(c));
    }
    else
    {
        printf("Yanlis secim yaptiniz");
    }

    return 0;
}
