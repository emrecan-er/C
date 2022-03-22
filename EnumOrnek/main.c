#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    ocak=1,
    subat,
    mart,
    nisan,
    mayis,
    haziran,
    temmuz,
    agustos,
    eylul,
    ekim,
    kasim,
    aralik  /*Sona virgul yok*/
}aylar;

void ayi_goster(aylar canan)
{
    switch(canan)
    {
        case ocak:
        printf("Ocak\n");
        break;
        case subat:
        printf("Subat\n");
        break;
        case mart:
        printf("Mart\n");
        break;
        case nisan:
        printf("Nisan\n");
        break;
        case mayis:
        printf("Mayis\n");
        break;
        case haziran:
        printf("Haziran\n");
        break;
        case temmuz:
        printf("Temmuz\n");
        break;
        case agustos:
        printf("Agustos\n");
        break;
        case eylul:
        printf("Eylul\n");
        break;
        case ekim:
        printf("Ekim\n");
        break;
        case kasim:
        printf("Kasim\n");
        break;
        case aralik:
        printf("Aralik\n");
        break;
        default:
            printf("Boyle bir ay yok aga\n");
            break;
    }
}

int main()
{
    aylar emre=temmuz;
    ayi_goster(emre);
    return 0;
}
