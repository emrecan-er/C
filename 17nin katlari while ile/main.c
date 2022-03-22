#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,limit,satir;
   i=0;
   satir=0;
   printf("Lutfen bir limit degeri giriniz \n");
   scanf("%d",&limit);
   while (i<=limit)
   {
       if (i%17==0)
       {
           printf("%5d",i);
           satir++;
           if(satir%10==0)
           {
               printf("\n");
           }
       }
        i++;

       }


    return 0;
}
