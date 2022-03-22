#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya,*dosya1;
    dosya=fopen("kelimeler.txt","r");
    dosya1=fopen("denedim.txt","w");
    int i;
    if(dosya==NULL)
    {
        printf("Dosya Okunamadi !!!");
        exit(1);
    }
    else
    {
    char satir[100];

    for(i=0;i<100;i++)
    {
        fscanf(dosya,"%c",&satir[i]);
    }
    printf("%c",satir[1]);
    }




    return 0;
}
