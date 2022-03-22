#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char isim[10];
    float x_ekseni;
    float y_ekseni;
}nokta;


void ekranayazdir(nokta p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s = (%.2f,%.2f)\n",p[i].isim,p[i].x_ekseni,p[i].y_ekseni);
    }

}

int main()
{
    nokta emre[5]={{"Emrecan",0,5},{"Kayra",0,6},{"Ilayda",3,8},{"Ozge",3,4}};
    ekranayazdir(emre,5);
    return 0;
}
