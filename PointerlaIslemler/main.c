#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ad1,*ad2,*ad;
    int n=10;
    int p=20;



    ad1=&n;
    ad2=&p;
    printf("Atamadan once ad1 %d\n",*ad1);
    printf("%d\n",ad1);
    *ad1=*ad2+2;
    printf("Atamadan sonra ad1 %d\n",*ad1);
    return 0;
}
