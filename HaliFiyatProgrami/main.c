#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,fiyat;
    printf("Lutfen Halinizin Kenar Uzunluklarini Giriniz \n");
    scanf("%f%f",&a,&b);
    fiyat=a*b*40+200;
    printf("Toplam Tutar = %.2f",fiyat);

    return 0;
}
