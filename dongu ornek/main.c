#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim,secim1;
    while(1)
    {
        printf("Sakamatik\n");
        printf("1-Zort\n");
        printf("2-Cu\n");
        printf("3-Ceviz Kafe\n");
        printf("4-SUS AQ");
        printf("Lutfen Secim Yapiniz.\n");
        scanf("%d",&secim);
        while (1)
        {
            if (secim==3)
            {
                printf("Ceviz Kafede bir masa var\n");
                printf("1-Sonra Nolmus\n");
                printf("2-Yeter artik\n");
                scanf("%d",&secim1);
                if(secim1==2)
                {
                    break;
                }
                else if (secim1==1)
                {
                    printf("Turker Reis\n");
                    break;
                }


            }
             if (secim==4)
                {
                    break;
                }

        }
    }



    return 0;
}
