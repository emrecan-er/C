#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vize1,vize2,fnl,donemsonu;
    printf("Sirasiyla vize 1,vize 2 ve final notlarinizi giriniz.\n");
    scanf("%f %f %f",&vize1,&vize2,&fnl);
    if((vize1<=100 && vize1>=0)&&(vize2<=100 && vize2>=0)&&(fnl<=100 && fnl>=0))
   {
     donemsonu=(vize1*0.2)+(vize2*0.3)+(fnl*0.5);
      printf("Donem sonu notunuz : %.2f",donemsonu);
   }
   else
   {
       printf("Hata!!!!\n");
   }

    return 0;
}
