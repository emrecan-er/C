#include <stdio.h>
#include <stdlib.h>

int main()
{
    int emre[5];
    int *sayi1,*sayi2;
    int n;
    printf("Lutfen Dizinin Eleman Sayisini Giriniz.\n");
    scanf("%d",&n);
    for(sayi1=emre;sayi1<emre+n;sayi1++)
    {
      printf("Lutfen Dizinin Elemanlarini Giriniz.\n");
     scanf("%d",sayi1);
    }
    printf("Dizimizin ilk hali: ");
    for(sayi1=emre;sayi1<emre+n;sayi1++)
    {
        printf("%4d",*sayi1);
    }

    return 0;
}
