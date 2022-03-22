#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("x^3+13x^2+47^x+5\n");
    printf("Lutfen bir x degeri giriniz\n");
    scanf("%f",&a);
    printf("Islem sonucu >> f(%.3f)= %.32f",a,a*a*a+13*a*a+47*a+5);

    return 0;
}
