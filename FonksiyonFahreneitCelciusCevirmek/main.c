#include <stdio.h>
#include <stdlib.h>
/*f=(1.8*c)+32 c=(5/9)*(F-32)*/
float fdencye(float f)
{
 return (0.5555)*(f-32);
}
float cdenfye(float c)
{
    return (1.8*c)+32;
}






int main()
{
    float f,c,islem;
    printf("1) Fahreneit===>Celcius\n");
    printf("2) Celcius===>Fahreneit\n");
    printf("Lutfen Yapmak Istediginiz Islemi Seciniz\n");
    scanf("%d",&islem);
    if(islem==1)
    {
        printf("Lutfen Fahreneit Degerini Giriniz\n");
        scanf("%f",&f);
        printf("%f Fahreneit %f Celciustur.\n",fdencye(f));

    }
    else if (islem==2)
    {
    printf("Lutfen Celcius Degeri Giriniz\n");
    scanf("%f",&c);
    printf("%f Celcius %f Fahreneit.\n",cdenfye(c));
    }
    else
    {
     printf("Yanlis Islem Sectiniz. \n");
    }


    return 0;
}
