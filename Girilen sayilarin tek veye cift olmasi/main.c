#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c;
  printf("Bir sayi giriniz\n");
  scanf("%d",&a);
   printf("Bir sayi giriniz\n");
  scanf("%d",&b);
   printf("Bir sayi giriniz\n");
  scanf("%d",&c);
  if (a%2==1)
  {
      printf ("%d degeri tek sayidir\n",a);
  }
  else
  {
      printf("%d degeri cift sayidir \n",a);
  }
   if (b%2==1)
  {
      printf ("%d degeri tek sayidir\n",b);
  }
  else
  {
      printf("%d degeri cift sayidir \n",b);
  }
   if (c%2==1)
  {
      printf ("%d degeri tek sayidir\n",c);
  }
  else
  {
      printf("%d degeri cift sayidir \n",c);
  }
  if(a,b,c==2)
  {
      printf("Girdiginiz %d degeri cift sayidir\n",a,b,c);
  }
    return 0;
}
