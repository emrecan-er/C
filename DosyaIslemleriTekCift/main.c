#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    int n;
    int i;
    char karakter;



    dosya=fopen("tekcift.txt","w");


    if(dosya==NULL)
    {
        printf("Dosya Olusturulamadi!");
    }
    else
    {
        printf("Lutfen bir sayi giriniz : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                fprintf(dosya,"Cift :\t %d \n",i);
            }
            else
            {
                fprintf(dosya,"Tek :\t %d\n",i);

            }
        }

    }
    fclose(dosya);
    printf("Bilgiler Dosyaya Yazildi\n ");
    printf("Dosya Okunuyor...\n ");
    dosya=fopen("tekcift.txt","r");
    do{

        karakter=getc(dosya);
        if(karakter!=EOF)
        {
            putchar(karakter);
        }

    }while(karakter!=EOF);
    fclose(dosya);


    return 0;
}
