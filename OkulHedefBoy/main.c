#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;
    float anneboy,bababoy,kiz,erkek;
    printf("Annenin boyu : ");
    scanf("%f",&anneboy);
     printf("Babanin boyu : ");
    scanf("%f",&bababoy);
    printf("Erkek(1) Kiz(2): ");
    scanf("%d",&secim);
    kiz=(anneboy+bababoy-13)/2;
    erkek=(anneboy+bababoy+13)/2;
    if(secim==1)
    {
    if(erkek==1.75)
    {
        printf("Dogacak erkek cocugunuzun boyu turkiye ortalamasina esittir.\n");
    }
    else if(erkek>1.75)
    {
        printf("Dogacak erkek cocugunuzun boyu turkiye ortalamasindan buyuktur.\n");
    }
    else if (erkek<1.75)
    {
      printf("Dogacak erkek cocugunuzun boyu turkiye ortalamasindan kucuktur.\n");
    }
    }

    if(secim==2)
    {
   if (kiz==1.63)
    {
        printf("Dogacak kiz cocugunuzun boyu turkiye ortalamasina esittir.\n");
    }
    else if (kiz>1.63)
    {
        printf("Dogacak kiz cocugunuzun boyu turkiye ortalamasindan buyuktur.\n");
    }
   else if (kiz<1.63)
    {
        printf("Dogacak kiz cocugunuzun boyu turkiye ortalamasindan kucuktur.\n");
    }
    }

    return 0;
}
