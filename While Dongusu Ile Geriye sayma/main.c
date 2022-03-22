#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Lutfen bir deger giriniz\n");
    scanf("%d",&a);
    while(a!=0)
    {
        printf("%d\n",a);
        a=a-1;
    }
    return 0;
}
