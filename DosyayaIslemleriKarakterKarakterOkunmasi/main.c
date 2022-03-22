#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char karakter;
    dosya=fopen("bilgi.txt","r");

    if(dosya==NULL)
    {
        printf("Dosya olusturulamadi...");
    }
    else
    {

        do
        {
            karakter=getc(dosya);
            if(karakter!=EOF)
            {
                putchar(karakter);

            }

        }
        while(karakter!=EOF);

    }
    fclose(dosya);
    printf("\nOkuma islemi tamamlandi ...\n");


    return 0;
}
