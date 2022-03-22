#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,x;
   printf("Ikinci Dereceden Denklem Olusturma Programi\n");
   printf("Olusturacaginiz Denklem = aX^2+bx+c seklindedir\n");
   printf("Bir a sayisi giriniz\n");
   scanf("%d",&a);
   printf("Bir b sayisi giriniz\n");
   scanf("%d",&b);
   printf("Bir c sayisi giriniz\n");
   scanf("%d",&c);
   printf("Bir x sayisi giriniz\n");
   scanf("%d",&x);
printf("Sonuc=%d",a*x*x+b*x+c);
    return 0;
}
