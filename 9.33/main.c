#include <stdio.h>
#include <stdlib.h>

int imambayildi(int n)
{
    if(n==1)
    return 3;
    else
    return 3+2*imambayildi(n-1);
}




int main()
{
    int gun;
   printf("Isci kac gun calisacak : ");
   scanf("%d",&gun);
   imambayildi(gun);
   printf("ucret:%d",imambayildi(gun));
    return 0;
}
