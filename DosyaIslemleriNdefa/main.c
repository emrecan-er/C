#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kullanici tarafindan girilen bir cumlenin bilgi.txt dosyasina n defa alt alta bastirilmasini saglayan program yaziniz
    FILE *dosya;
    char cumle[30];
    int n;
    int i;
    dosya=fopen("bilgi.txt","w");

    if(dosya==NULL)
    {
        printf("Dosya olusturulamadi !! ");
    }
    else
    {
        printf("Lutfen cumle giriniz : ");
        gets(cumle);
        printf("Kac kere alt alta yazilsin : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            fprintf(dosya,"%d.satir :\t %s\n",i,cumle);
        }
         fclose(dosya);
         printf("Bilgiler dosyaya yazildi...");
    }

    return 0;
}
