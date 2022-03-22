#include <stdio.h>
#include <stdlib.h>
struct koordinat{

float x,y;

};

int main()
{
    /*Bir topun x-y kordinat duzlemindeki hareketi icin aþaðýdaki yapý ve formuller kullanýlmaktadýr.topun t=0 anýndan t=10 anýna kadar 0.1snlik zaman
    dilimlerinde x ve y koordinat degerlerinin bulunmasýný ve ekrana gosterilmesini saglayan c programini yaziniz.
    x=20-6cos(t)
    y=15+2sin(t)*/
    struct koordinat top;
    float t;
    int i;
    printf("X\t\tY\n");
    printf("======\t\t=====\n");
    for(t=0.0;t<10.0;t+=0.1)
    {
        top.x=20-6*cos(t);
        top.y=15+2*sin(t);
        printf("%f\t %f\n",top.x,top.y);
    }

    return 0;
}
