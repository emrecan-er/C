#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char op;
    printf("Lutfen operator giriniz  (+,-) \n");
    scanf("%c",&op);
    printf("Lutfen iki adet sayi giriniz \n");
    scanf("%d%d",&a,&b);
    if ((a==0)||(b==0))
    {
        printf("Payda sifir olamaz.Islem gecersiz\n");
    }
   else
   {
        printf("1/%d %c 1/%d =",a,op,b);
        switch(op)
        {
        case '+' :
            {
                printf("%d/%d",a+b,a*b);
            }
            break;
        case '-':
            {
                printf("%d/%d",b-a,a*b);
            }
            break;
        default:
            {
                printf("Yanlis operator girdiniz\n");
            }
        }
   }
    return 0;
}
