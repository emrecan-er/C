#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("Lutfen kac dakika konustugunuzu giriniz \n");
    scanf("%f",&a);
    if(a<=3)
    {
        printf("Konusma Ucreti = 0.25 krs\n");
    }
    else
    {
        printf("Konusma Ucreti = %.2f \n",0.25+(a-3)*0.08);
    }
    return 0;
}
