#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Bir sayi giriniz\n");
    scanf("%d",&n);

    while(n!=0)
    {
       printf("%4d",n);
        n=n-1;
    }
    return 0;
}
