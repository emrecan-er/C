#include <stdio.h>
#include <stdlib.h>

struct zaman{
  int saniye;
  int dakika;
  int saat;
};
void fark(struct zaman t1,struct zaman t2,struct zaman *fark)
{



}

int main()
{
    struct zaman t1,t2,frk;
    printf("Baslangic zamani (saat,dakika,saniye)");
    scanf("%d%d%d",&t1.saat,&t1.dakika,&t1.saniye);
    printf("Bitis zamani (saat,dakika,saniye)");
    scanf("%d%d%d",&t2.saat,&t2.dakika,&t2.saniye);
    fark(t1,t2,&frk);

    return 0;
}
