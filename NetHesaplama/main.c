#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dogru,yanlis,bos;
    float net;
    printf("                                    ======TYT NET HESAPLAMA PROGRAMI======\n");
    printf("Dogru sayinizi giriniz.\n");
    scanf("%f",&dogru);
     printf("Yanlis sayinizi giriniz.\n");
    scanf("%f",&yanlis);
     printf("Bos sayinizi giriniz.\n");
    scanf("%f",&bos);
    if(dogru+yanlis+bos==120)
    {
    printf("Dogru sayiniz  =  %.2f \n",dogru);
    printf("Yanlis sayiniz  =  %.2f \n",yanlis);
     net=dogru-(yanlis*0.25);
    printf("Net sayiniz  =  %.2f \n",net);
    }
    else
    {
        printf("Dogru yanlis ve bos sayisi toplami 120 olmalidir.");
    }



    return 0;
}
