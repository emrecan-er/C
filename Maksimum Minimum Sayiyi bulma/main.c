#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int max,min;
    printf("Uc farkli tam sayi giriniz\n");
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
    max=c;
    }
    printf("Maximum sayi %d dir \n",max);
    min=b;
    if(a<b)
    {
        min=a;
    }
    if(c<b)
    {
        min=c;
    }
    printf("Minimum Sayi %d'dir",min);



    return 0;
}
