#include <stdio.h>
#include <stdlib.h>
int f(int sayi)
{
    if(sayi%2==0)
    {
        return 1;
    }
    else
    {
        return 2;
    }

}
int main()
{
    int x,sonuc;
    printf("Lutfen Sayi Giriniz.\n");
    scanf("%d",&x);
    sonuc=f(x);
    if(sonuc==1)
    {
        printf("Sayi Cifttir");
    }
    else
    {
        printf("Sayi Tektir");
    }

    return 0;
}
