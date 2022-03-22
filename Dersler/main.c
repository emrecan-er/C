#include <stdio.h>
#include <stdlib.h>

int main()
{
//Ornek 1
   /* int not;
    printf("Lutfen not giriniz : ");
    scanf("%d",&not);
    if(90<=not && not<=100)
    {
        printf("Harf notu : A");
    }
    else if(70<=not && not<90)
    {
        printf("Harf notu : B");
    }
    else if(50<=not && not<70)
    {
        printf("Harf notu : C");
    }
    else if(30<=not && not<50)
    {
        printf("Harf notu : D");
    }
    else if(0<=not && not<30)
    {
        printf("Harf notu : F");
    }
    else
    {
        printf("Hatali giris!!");
    }*/


    //Ornek 2

    //int sayi,birler,onlar;
    //printf("Lutfen iki basamakli bir tam sayi giriniz : ");
    //scanf("%d",&sayi);
    //birler=sayi%10;
    //onlar=sayi/10;
    //if(birler==2*onlar)
    //{
    //printf("Birler basamagi onlar basamaginin iki katidir.");
    //}
    //else
    //{
      //  printf("Birler basamagi onlar basamaginin iki kati degildir.");
   // }

    //int a,b,c,max;
   // printf("Lutfen uc adet sayi giriniz : ");
   // scanf("%d %d %d",&a,&b,&c);
   // if(a>=b && a>=c)
   // {
     //   max=a;
  //  }
    //else if(b>=a && b>=c)
   // {
      //  max=b;
   // }
   // else
   // {
   //     max=c;
   // }
   // printf("En buyuk sayi : %d",max); *\

    int x,n,t=0;
    float ort;
    printf("Not degerlerini giriniz : \n");
    for(x=1;x<20;x++)
    {
        scanf("%d",&n);
        t=t+n;
    }
    ort=t/20;
    printf("Ortalama = %.2f",ort);

    return 0;
}
