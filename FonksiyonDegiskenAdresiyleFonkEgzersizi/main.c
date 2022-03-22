#include <stdio.h>
#include <stdlib.h>
int emrecan(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int man(int n)
{
    if(n%3==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Bir sayi giriniz.\n");
    scanf("%d",&n);
    if(emrecan(n)==1)
    {
        printf("Sayimiz cift sayidir.\n");
    }
    if(man(n)==1)
    {
        printf("Sayimiz uc ile tam bolunur.\n");
    }
    if(emrecan(n)==1 && man(n)==1)
    {
        printf("Sayimiz alti ile tam bolunur.\n");
    }
    return 0;
}
