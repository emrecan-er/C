#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    float yaricap,alan;
    printf("Yaricapi giriniz.\n");
    scanf("%f",&yaricap);
    alan=PI*yaricap*yaricap;
    printf("Dairenin alani= %f",alan);
    return 0;
}
