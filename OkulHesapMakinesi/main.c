#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;
    printf("Lutfen alanini bulmak istediginiz sekli yaziniz.(Daire(1),Dikdortgen(2),Ucgen(3),Kare(4))\n");
    scanf("%d",&secim);
    if(secim==2)
    {
        float a,b;
        printf("Lutfen dikdortgenin iki kenarini giriniz.\n");
        scanf("%f %f",&a,&b);
        printf("Dikdortgenin alani = %.2f",a*b);
    }
    else if (secim==1)
    {
        float r;
        printf("Lutfen dairenin yaricapini giriniz.\n");
        scanf("%f",&r);
        printf("Dairenin alani = %.2f",3.14*r*r);
    }
    else if (secim==4)
    {
      float x;
        printf("Lutfen karenin kenarini giriniz.\n");
        scanf("%f",&x);
        printf("Dairenin alani = %.2f",x*x);
    }
    else if(secim==3)
    {
        float m,n;
        printf("Lutfen ucgenin kenarlarini giriniz.\n");
        scanf("%f %f",&m,&n);
        printf("Ucgenin alani = %.2f",(m*n)/2);
    }
    else
    {
        printf("Hatali Secim!!!!!\n");
    }

    return 0;
}
