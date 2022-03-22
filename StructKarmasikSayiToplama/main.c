#include <stdio.h>
#include <stdlib.h>

typedef struct karmasik_sayi
{
    float reel;
    float sanal;
}karmasik;
void topla(karmasik n1,karmasik n2)
{
    karmasik temp;
    temp.reel=n1.reel+n2.reel;
    temp.sanal=n1.sanal+n2.sanal;
    printf("\t%.1f+%.1fi\n",n1.reel,n1.sanal);
    printf("\t%.1f+%.1fi\n",n2.reel,n2.sanal);
    printf("+");
    printf("__________________\n");
    printf("\t%.1f+%.1fi",temp.reel,temp.sanal);
}


int main()
{
    /*Karmasik sayilarda toplama islemi yapilirken reel ve sanal kisimlar ayri ayri toplanmaktadir.buna gore kullanýcý tarafindan girilen a+bi
    seklindeki iki karmasik sayinin toplamini asagida void topla(karmasik n1,karmasik n2);*/
    karmasik k1,k2;
    printf("Birinci sayinin reel kismini ve sanal kismini giriniz(a+bi):");
    scanf("%f %f",&k1.reel,&k1.sanal);
    printf("Ikinci sayinin reel kismini ve sanal kismini giriniz(a+bi):");
    scanf("%f %f",&k2.reel,&k2.sanal);
    topla(k1,k2);

    return 0;
}
