#include <stdio.h>
#include <stdlib.h>
void degistir(int ad1,int ad2)
{
    int gecici;
    gecici=ad1;
    ad1=ad2;
    ad2=gecici;
    printf("ilk sayi a=%d ikinci sayi b=%d\n");

}



int main()
{
    int a=10,b=20;
    printf("Cagirmadan once a=%d,b=%d\n",a,b);
    degistir(a,b);
    printf("Cagirdiktan sonra a=%d b=%d\n",a,b);
    return 0;
}
