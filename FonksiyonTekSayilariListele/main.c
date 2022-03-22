#include <stdio.h>
#include <stdlib.h>
void teksayilar(int n)
{
    int i=0;
     printf("Tek sayilar : \n");
    while(i<=n)
    {
      if (i%2==1)
      {
          printf("%d \n",i);
      }
      i++;
    }

}

int main()
{
 int sayi;
 printf("Lutfen Pozitif Bir Tam Sayi Giriniz.\n");
 scanf("%d",&sayi);
 teksayilar(sayi);
    return 0;
}
