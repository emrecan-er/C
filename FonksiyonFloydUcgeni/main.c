#include <stdio.h>
#include <stdlib.h>

void floyd(int n)
{
    int i=1;
    int j,a=1;
 while(i<=n)
 {
     j=1;
     while (j<=i)
     {
         printf("%5d",a);
         a++;
          j++;
     }
     printf("\n");
     i++;
 }





}

int main()
{
    int satir;
    printf("Floyd Ucgeni Icin Satir Sayisini Giriniz.\n");
    scanf("%d",&satir);
    floyd(satir);

    return 0;
}
