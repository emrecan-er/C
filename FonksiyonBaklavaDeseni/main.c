#include <stdio.h>
#include <stdlib.h>
void ucgenc(int satir)
{
    int i,j,bosluksayisi;
    bosluksayisi=satir-1;
    for(j=1;j<=satir;j++)
    {
        for(i=1;i<=bosluksayisi;i++)
        {
            printf(" ");
        }
        bosluksayisi--;
        for(i=1;i<=2*j-1;i++)
        {
            printf("c");
        }
     printf("\n");
    }
}


    void ucgenarti(int satir)
    {
       int i,j;
       int bosluksayisi=1;
       for(j=1;j<=satir-1;j++)
       {
           for(i=1;i<=bosluksayisi;i++)
           {
               printf(" ");
           }
           bosluksayisi++;
           for(i=1;i<=2*(satir-j)-1;i++)
           {
               printf("+");
           }
           printf("\n");
       }
    }






int main()
{
    int satir;
    printf("Lutfen Satir Sayisini Giriniz.\n");
    scanf("%d",&satir);
    ucgenc(satir);
    ucgenarti(satir);



    return 0;
}
