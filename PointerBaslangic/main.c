#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int emre=10;
    int *p;
    p=&emre;
    printf("%d\n",*p);
    printf("%d\n",p);
    printf("%d\n",emre);
    printf("%d\n",&emre);
    */
    int *sayi;
    int n;
    n=20;
    sayi=&n;
    printf("%d\n",*sayi);
    printf("%d\n",sayi);
    printf("%d\n",n);
    printf("%d\n",&n);
    *sayi=30;
    printf("%d\n",n);
    printf("%d\n",&n);




    return 0;
}
