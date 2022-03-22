#include <stdio.h>
#include <stdlib.h>

float dortislem(float a,float b,char islem)
{
    if(islem=='+')
    {
        return a+b;
    }
    else if (islem=='-')
    {
        return a-b;
    }
    else if (islem=='*')
    {
        return a*b;
    }
    else if (islem=='/')
    {
        return a/b;

    }
    else
    {
        printf("Yanlis operator girdiniz \n");
    }
}







int main()
{
    int a,b;
    char islem;
    printf("Hangi islemi yapmak istersiniz (+ - / *) \n");
    scanf("%c",&islem);
    printf("Lutfen iki adet sayi giriniz\n");
    scanf("%d %d",&a,&b);

    printf("Islemin sonucu %.2f",dortislem(a,b,islem));
    return 0;
}
