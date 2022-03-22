#include <stdio.h>
#include <stdlib.h>

int main()
{
    double dizi[5];
    dizi[0]=12345678910;
    dizi[1]=12345678911;
    dizi[2]=12345678912;
    dizi[3]=12345678911;
    dizi[4]=12345678913;
    int i;
    int j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(dizi[i]==dizi[j])
            {
                printf("\n%lf\n",dizi[i]);
            }
        }

    }

    return 0;
}
