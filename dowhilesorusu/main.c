#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float x;
do
{
    printf("Lutfen bir pozitif sayi giriniz\n");
    scanf("%f",&x);
    if(x<0)
    {
        printf("Lutfen pozitif bir sayi giriniz\n");
    }
    if(x<0)continue;
    printf("Sayimizin karekoku = %.2f\n",sqrt(x));
}
while(x);


    return 0;
}
