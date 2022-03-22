#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogrenci{

char ad[15];
char soyad[15];
int yas;

};


int main()
{
    struct ogrenci emre={"Emrecan","Er",19};;
    /*strcpy(emre.ad,"Emrecan");
    strcpy(emre.soyad,"Er");
    emre.yas=19;*/
    printf("%s \t %s \t %d",emre.ad,emre.soyad,emre.yas);
    return 0;
}
