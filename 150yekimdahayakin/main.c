#include <stdio.h>
#include <stdlib.h>
#define tam 150
int main()
{
int no,boy,fark,minboy,minno;
printf("Lutfen once boyunuzu ve sonra numaranizi giriniz \n");
scanf("%d %d",&boy,&no);
minno=no;
fark=abs(boy-tam);
while(no>0)
{
printf("Lutfen once boyunuzu ve sonra numaranizi giriniz \n");
scanf("%d %d",&boy,&no);
if (abs(boy-tam)<fark)
{
    fark=abs(boy-tam);
    minno=no;
    minboy=boy;
}
}
printf("%d numarali ogrenci %d cm boyuyla %d santime en yakindir\n",minno,minboy,tam);
    return 0;
}
