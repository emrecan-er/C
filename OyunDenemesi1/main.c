#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,sayi,sayac=0;
    int dizi[1];
    srand(time(0));
    for(i=0;i<1;i++)
    {
        dizi[i]=rand()%1000;
        while(sayac<10)
        {
            printf("Lutfen bir sayi giriniz.\n");
            scanf("%d",&sayi);
            sayac++;
            if(sayi==dizi[i])
            {
               printf("Tebrikler!!!\n");
               printf("%d.hamlede buldunuz.\n",sayac);
               break;
            }
            else if (sayi<dizi[i])
            {
                printf("Yukari\n");
            }
            else
            {
               printf("Asagi\n");
            }

        }
        break;
        }
    return 0;
}
