#include <stdio.h>
#include <stdlib.h>
void sekilciz(int kenar,char karakter)
{
    int j,i;
    for(j=kenar;j>0;j--)
    {
        for(i=1;i<=kenar-j;i++)
        {
         printf(" ");
        }
        for(i=1;i<=2*j-1;i++)
        {
            printf("%c",karakter);
        }
        printf("\n");
    }
    for(j=1;j<=kenar;j++)
    {
        for(i=1;i<=kenar-j;i++)
        {
            printf(" ");
        }
        for(i=1;i<=2*j-1;i++)
        {
            printf("%c",karakter);
        }
        printf("\n");
    }


}
int main()
{
    int kenar;
    char karakter;
    printf("Hangi Karakteri Bastirmak Istiyorsunuz.\n");
    scanf("%c",&karakter);
    printf("Kenar Sayisini Giriniz\n");
    scanf("%d",&kenar);
    printf("\n\n\n");
    sekilciz(kenar,karakter);
    return 0;
}
