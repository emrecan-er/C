#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,x,y;
    float uzaklik;
    printf("Ilk noktanin kordinatlarini giriniz (x,y).\n");
    scanf("%d %d",&a,&b);
    printf("Ikinci noktamizin kordinatlarini giriniz (x,y).\n");
    scanf("%d %d",&x,&y);
    uzaklik=sqrt((a-x)*(a-x)+(b-y)*(b-y));
    printf("Iki nokta arasi uzaklik %.2f",uzaklik);
    return 0;
}
