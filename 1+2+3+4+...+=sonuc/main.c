#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,sonuc;
  printf("Lutfen bir deger giriniz\n");
  scanf("%d",&n);
  i=1;
  sonuc=0;
  while(i=<n)
  {
      sonuc=sonuc+i;
      i++;
  }
   printf("%d",sonuc);

    return 0;
}
