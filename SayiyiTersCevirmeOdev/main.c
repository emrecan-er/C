#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d",&a);
    while(a>10)
    {
        printf("%d",a%10);
        a=a/10;
    }
    printf("%d\n",a);
    return 0;
}
