#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    float yaricap;
    float hacim;
    printf("Lutfen yaricap giriniz : ");
    scanf("%f",&yaricap);
    hacim=((4*PI)/3)*(yaricap*yaricap*yaricap);
    printf("Hacim = %f",hacim);

    return 0;
}
