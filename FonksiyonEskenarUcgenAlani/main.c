#include <stdio.h>
#include <stdlib.h>
void alan(int kenar)
{
   float ucgenalani;
   ucgenalani=(kenar*kenar*1.7)/4;
   printf("Ucgen Alani %.2f",ucgenalani);

}

int main()
{
    int x;
    printf("        Eskenar Ucgenin Alanini Hesaplama\n");
    printf("Lutfen Bir Sayi Giriniz.\n");
    scanf("%d",&x);
    alan(x);
    return 0;
}
