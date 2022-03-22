#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dogru,yanlis,bos;
    float net;
    printf("====TYT NET HESAPLAMA====\n");
    printf("Dogru sayisi : ");
    scanf("%d",&dogru);
    printf("\n");
    printf("Yanlis sayisi : ");
    scanf("%d",&yanlis);
    printf("\n");
    printf("Bos sayisi : ");
    scanf("%d",&bos);
    printf("\n");
    net=dogru-yanlis*0.25;
    if(dogru+yanlis+bos==120)
    {
        printf("Net sayiniz: %.2f",net);
    }
    else
    {
        printf("Dogru,yanlis ve bos sayisi 120 olmalidir.\n");
    }
    return 0;
}
