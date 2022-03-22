#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,bir,iki,uc,dort,bes;
    printf("Lutfen 5 basamakli bir sayi giriniz\n");
    scanf("%d",&x);
    bir=x%10;
    iki=(x/10)%10;
    uc=(x/100)%10;
    dort=(x/1000)%10;
    bes=(x/10000);
    if((bir==0)&&(iki==0)&&(uc==0)&&(dort==0)&&(bes==0))
    {
       printf("Hatali Sayi\n");
    }
    else if (bir==bes && iki==dort)
    {
        printf("Sayi palindromdur.\n");
    }
    else
    {
        printf("Palindrom Degildir.\n");
    }

    return 0;
}
