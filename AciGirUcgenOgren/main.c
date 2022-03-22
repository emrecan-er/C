#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Lutfen 3 adet aci giriniz \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    {
    if ((a==b) || (b==c) || (a==c))
    {
        printf("Girdiginiz ucgen ikizkenar ucgendir.\n");
    }
    else if(a%b%c)
    {
        printf("girdiginiz ucgen cesitkenar ucgendir. \n");
    }
    if ((a==60)&&(b==60)&&(c==60))
    {
        printf("Girdiginiz ucgen eskenar ucgendir\n");
    }
    }
    else
    {
        printf("Girdiginiz degerler ucgen olusturmuyor\n");
    }
    return 0;
}
