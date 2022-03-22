#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Lutfen iki tane sayi giriniz  :  ");
    scanf("%d%d",&a,&b);
    if ((a>0 && b>0) || (a<0 && b<0))
    {
        printf(">>isaret (%d*%d)= +1",a,b);
    }

   else if ((a<0 && b>0) || (a>0 && b<0));
    {
        printf(">>isaret (%d*%d)= -1",a,b);
    }
   if ((a==0) || (b==0))
   {
       printf(">>isaret (%d*%d)= 0",a,b);
   }
  return 0;
}
