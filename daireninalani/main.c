#include <stdio.h>
#include <stdlib.h>
#define PI 3.141
int main()
{
    float alan,yaricap;
    printf("Dairenin yaricapini giriniz \n");
    scanf("%f",&yaricap);
    alan=PI*yaricap*yaricap;
    printf("Dairenin alani = %.3f",alan);
    return 0;
}
