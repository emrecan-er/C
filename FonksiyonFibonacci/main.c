#include <stdio.h>
#include <stdlib.h>
void fibonacci(int n)
{
  int ilk=0,ikinci=1,sonraki,i;
  printf("Uretilecek Fibonacci Sayilari : \n");
  for(i=0;i<n;i++)
  {


      if(i<=1)
      {
          sonraki=i;
      }
      else
      {
          sonraki=ilk+ikinci;
          ilk=ikinci;
          ikinci=sonraki;
      }
      printf("%d\n",sonraki);
  }





}


int main()
{
   int sayi;
   printf("Kac adet fibonacci sayisi uretilecek.\n");
   scanf("%d",&sayi);
   fibonacci(sayi);
    return 0;
}
