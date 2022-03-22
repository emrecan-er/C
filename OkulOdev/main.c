#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,sayi1,sayi2,sayi3;
    printf("Lutfen 4 Basamakli pozitif bir sayi giriniz.\n");
    scanf("%d",&sayi);
    while(sayi>10)
    {
        sayi%10=sayi1;
        printf("%d",sayi1);
        sayi/10=sayi;
        sayi%10=sayi2;
        printf("%d",sayi2);
        sayi/10=sayi;
        sayi%10=sayi3;
        printf("%d",sayi3);

    }
    return 0;
}
