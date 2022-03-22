#include <stdio.h>
#include <stdlib.h>

int f(int a,int b)
{

  if(a>b)
  {
      return 1;
  }
  else if(a==b)
  {
      return 2;
  }
  else
  {
      return 3;
  }




}






int main()
{
    int sayi1,sayi2,sonuc;
    printf("Lutfen iki adet sayi giriniz.\n");
    scanf("%d %d",&sayi1,&sayi2);
    sonuc=f(sayi1,sayi2);
    if (sonuc==1)
    {
        printf("%d sayisi %d sayisindan buyuktur.\n",sayi1,sayi2);
    }
    else if(sonuc==2)
    {
      printf("%d sayisi %d sayisina esittir.\n",sayi1,sayi2);
    }
    else if(sonuc==3)
    {
        printf("%d sayisi %d sayisindan kucuktur.\n",sayi1,sayi2);
    }

    return 0;
}
