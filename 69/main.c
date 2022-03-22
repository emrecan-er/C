#include <stdio.h>
#include <stdlib.h>

 int main ()
 { //BU PROGRAMDA ONCE TUM IKI BASAMAKLI SAYILAR ARASINDA DIRENCI EN BUYUK OLANI BULUYORUM DIRENCIN 4 OLDUGUNU GORUYORUM VE DIRENC 4 OLDUGUNDA BREAK KOMUTU ILE DONGUYU KIRIP EKRANA BASTIRIYORUM
	int i;
	int birlerbas;  //her basamak icin ayri ayri tanimladim
	int onlarbas;
	int yenisayi;
	int yenisayi2;
	int yenisayi3;
	int onlarbas2;
	int birlerbas2;
	int birlerbas3;
	int onlarbas3;
	for (i=10;i<100;i++) //iki basamakli sayilar dedigi icin for dongusunu 10dan baslattim
        {
	birlerbas=i%10;//basamak alma islemleri...
	onlarbas=i/10;
	yenisayi=birlerbas*onlarbas;//basamaklari carpiyorum ve 10'dan buyuk mu diye kontrol ediyorum ayni islemleri tekrar tekrar yapiyorum
	if (yenisayi>=10)
        {
		onlarbas2=yenisayi/10;
		birlerbas2=yenisayi%10;
		yenisayi2=birlerbas2*onlarbas2;
		if (yenisayi2>=10)
            {
			onlarbas3=yenisayi2/10;
			birlerbas3=yenisayi2%10;
			yenisayi3=onlarbas3*birlerbas3;
			if (yenisayi3>=10)
			{
            printf("Carpim direnci en buyuk olan sayi=%d \n",i);
            break;
			}
            }
    }
    }

    return 0;
}
