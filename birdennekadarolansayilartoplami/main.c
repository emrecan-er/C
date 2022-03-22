#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,toplam;
    printf("Lutfen bir sayi giriniz \n");
    scanf("%d",&n);
    i=1;
    toplam=0;
    while(i<=n)
    {
        if(i==n)
        {
            printf("%d",n);
        }
        else
            {
                printf("%d ",i);

        }

        toplam=toplam+i;
           i++;
    }
    printf("%d\n",n,toplam);
    return 0;
}
