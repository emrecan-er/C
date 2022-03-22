#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float x,seri;
    printf("Lutfen bir n sayisi giriniz.\n");
    scanf("%d",&n);
     printf("Lutfen bir x sayisi giriniz.\n");
    scanf("%f",&x);
    for(i=1;i<=2*n-1;i+=2)
    {
        seri+=i/pow(x,i+1);
    }
    printf("Seri = %.2f",seri);

    return 0;
}
