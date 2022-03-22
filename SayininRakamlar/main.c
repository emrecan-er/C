#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int birler,onlar,yuzler,binler;
    int max,min;
    printf("Lutfen dort basamakli bir sayi giriniz.\n");
    scanf("%d",&sayi);
    birler=sayi%10;
    onlar=(sayi/10)%10;
    yuzler=(sayi/100)%10;
    binler=sayi/1000;
    binler=max;
    if(yuzler>max)
    {
        max=yuzler;
    }
    else if (onlar>max)
    {
        max=onlar;
    }
    else
    {
        max=birler;
    }
    binler=min;
    if(yuzler<min)
    {
        min=yuzler;
    }
    else if (onlar<min)
    {
        onlar=min;
    }
    else  (birler<min)
    {
        birler=min;
    }


    printf("Maksimum deger %d\n",max);
    printf("Minimum deger %d\n",min);
    return 0;
}
