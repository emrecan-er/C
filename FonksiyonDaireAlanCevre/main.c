#include <stdio.h>
#include <stdlib.h>
void dairealancevre(int r)
{
   float EMRE=3.14,alan,cevre;
   alan=EMRE*r*r;
   cevre=EMRE*r*2;
    printf("Dairenin Alani = %.2f\n\n",alan);
    printf("Dairenin Cevresi = %2f\n",cevre);
}

 int main()
 {
 float r;
 printf("Lutfen Dairenin Yaricapini Giriniz\n");
 scanf("%f",&r);
 dairealancevre(r);

    return 0;
}
