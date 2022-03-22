#include <stdio.h>
#include <stdlib.h>


int main()
{
    struct nokta {
    float x_ekseni;
    float y_ekseni;
    };
    struct nokta emre;
    emre.x_ekseni=3;
    emre.y_ekseni=2;

    printf("X eksenimiz %.2f Y ekseni %.2f",emre.x_ekseni,emre.y_ekseni);
    return 0;
}
