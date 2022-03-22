#include <stdio.h>
#include <stdlib.h>

int main()
{
float a,b;
char op;
printf("Lutfen operator girinizn\n");
scanf("%c",&op);
printf("Lutfen iki adet sayi giriniz\n");
scanf("%f%f",&a,&b);
switch (op)
{
    case '+' :printf("Toplama isleminin sonucu %.2f + %.2f = %.2f'dir",a,b,a+b);
    break;
    case '-' :printf("Cikarma isleminin sonucu %.2f - %.2f = %.2f'dir",a,b,a-b);
    break;
    case '*' :printf("Carpma isleminin sonucu %.2f * %.2f = %.2f'dir",a,b,a*b);
    break;
    case '/' :printf("Bolme isleminin sonucu %.2f / %.2f = %.2f'dir",a,b,a/b);
    break;
    default:printf("Hatali giris yaptiniz\n");
}
    return 0;
}
