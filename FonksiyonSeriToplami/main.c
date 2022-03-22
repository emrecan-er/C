#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int seritoplami(int n)
{
    int i,toplam=0;
    for(i=1;i<=n;i++)
    {
        toplam=toplam+(pow(i,2));
    }
    return toplam;

}
int main()
{
    int n;
    printf("n degerini giriniz\n");
    scanf("%d",&n);
    seritoplami(n);
    printf("Serinin toplami %d\n",seritoplami(n));
    return 0;
}
