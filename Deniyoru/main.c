//EMRECAN ER 21181616055
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int secim1,secim2,secim3,secim4,secim5,secim6;
    float toplamtutar=0.0;//toplam tutar float oldugu icin 0.0 degerini atiyorum boylelikle kullanici alisveris yapmadan sepetini sorgularsa 0.0 degerini gorur
    printf("**************************--- ABC ELEKTRONIK ---**************************\n\n");
    printf("--------------------------------Hosgeldiniz-------------------------------\n\n");//yazinin hos gorunmesi icin \t ve \n komutlarini kullandim
    printf("**************************************************************************\n\n");
    while(1) //while'i bu sekilde kullanmamin sebebi sinirsiz donguye girmesi ve kullanici ilgili komutlari girdiginde bu menuye atmasi
    {
    printf("1- Urun ve fiyat sorgula.\n");
    printf("2- Sepete urun ekle.\n");//
    printf("3- Siparis tamamla.\n");
    printf("4- Sonlandir.\n");
    printf("***********************\n\n");
    printf("Seciminiz:");
    scanf("%d",&secim1);
    if(secim1==1)
    {
        printf("***********************\n");
        printf("Hangi Kategoriden Urun Sorgulamak Istersiniz?\n");
        printf("1- Akilli Telefon\n");
        printf("2- Akilli Saat\n");
        printf("3-Yazici\n");
        printf("4-Bilgisayar\n");
         printf("Seciminiz:");
        scanf("%d",&secim2);
		for(;;)//for dongusunu bu sekilde kullanmamin sebebi sinirsiz donguye girmesi ve kullanicidan break komutuna gelene kadar deger almasi brea komutune gelince(ana menuye don secenegi) bu dongu kirilir ve ana donguye girer boylece ana menu ekrani gelir
        {
            if(secim2==1)
        {
        printf("***********************\n");
        printf("Akilli Telefon-1 = 1500 TL\n");
        printf("Akilli Telefon-2 = 2750 TL\n");
        printf("Akilli Telefon-3 = 8832 TL\n");
        printf("***********************\n");
        printf("1-Baska kategori urunleri sorgula.\n");
        printf("2-Ana menuye don.\n");
        printf("Seciminiz:");
        scanf("%d",&secim3);
        printf("\n\n");
        }
       else if(secim2==2)
        {
        printf("***********************\n");
        printf("Akilli Saat-1 = 543.99 TL \n");
        printf("Akilli Saat-2 = 1324.50 TL \n");
        printf("Akilli Saat-3 = 850 TL \n");
        printf("\n***********************\n");
        printf("1-Baska kategori urunleri sorgula.\n");
        printf("2-Ana menuye don.\n");
        printf("Seciminiz:");
        scanf("%d",&secim3);
        printf("\n\n");
        }
        else if(secim2==3)
        {                                     //Baska kategori urunleri sorgula ve anamenuya don icin ayri bir if else actim eger ana menuye don secilirse for dongusu kirilir ana donguye geri doner ve ana menu
                                            //ekrani gelir eger diger secenek secilirse dongu donmeye devam eder ve diger urunleri listeler
        printf("***********************\n");
        printf("1- Yazici A = 553.50 TL \n");
        printf("2- Yazici B = 848.20 TL \n");
        printf("3- Yazici C = 1433.33 TL\n");
        printf("\n***********************\n");
        printf("1-Baska kategori urunleri sorgula.\n");
        printf("2-Ana menuye don.\n");
        printf("Seciminiz:");
        scanf("%d",&secim3);
        printf("\n\n");
        }
        else if(secim2==4)
        {
        printf("***********************\n");
        printf("1- Bilgisayar X   = 14600 TL \n");
        printf("2- Bilgisayar Y = 12964 TL \n");
        printf("3- Bilgisayar Z  = 22920 TL\n");
        printf("4- Bilgisayar Q  = 36123 TL\n");
        printf("\n***********************\n");
        printf("1-Baska kategori urunleri sorgula.\n");
        printf("2-Ana menuye don.\n");
        printf("Seciminiz:");
        scanf("%d",&secim3);
        printf("\n\n");
        }
        else
        {
            printf("\n***********************\n");
            printf("Hatali Secim Yaptiniz \n");
            printf("***********************\n");
            printf("Hangi Kategoriden Urun Sorgulamak Istersiniz?\n");
            printf("1- Akilli Telefon\n");
            printf("2- Akilli Saat\n");
            printf("3-Yazici\n");
            printf("4-Bilgisayar\n");
            printf("Seciminiz:");
            scanf("%d",&secim2);
        }
		if(secim3==1)
        {
        printf("***********************\n");
        printf("Hangi Kategoriden Urun Sorgulamak Istersiniz?\n");
        printf("1- Akilli Telefon\n");
        printf("2- Akilli Saat\n");
        printf("3-Yazici\n");
        printf("4-Bilgisayar\n");
        printf("\n***********************\n");
        printf("Seciminiz:");
        scanf("%d",&secim2);
        }
        else if(secim3==2)
        {
            break;
        }
		else
        {
            printf("\n***********************\n");
            printf("Hatali Giris!!");
            printf("\n***********************\n");
        }

	}

	}
		else if (secim1==3)
        {
            printf("***********************\n");
            printf("Toplam sepet tutariniz = %.2f\n",toplamtutar);
            printf("\n***********************\n");
        }
	else if (secim1==2)
	{
        printf("***********************\n");
        printf("Hangi Kategoriden Urun Eklemek Istersiniz?\n");
        printf("1- Akilli Telefon\n");
        printf("2- Akilli Saat\n");
        printf("3-Yazici\n");
        printf("4-Bilgisayar\n");
        printf("\n***********************\n");
        printf("Seciminiz:");
        scanf("%d",&secim4);
		for(;;)
		{
		if(secim4==1)
        {
            printf("\n***********************\n");
            printf("Akilli telefon kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n");
            printf("Akilli Telefon-1 = 1500 TL\n");
            printf("Akilli Telefon-2 = 2750 TL\n");
            printf("Akilli Telefon-3 = 8832 TL\n");
            printf("\n***********************\n");
            printf("Seciminiz:");
            scanf("%d",&secim5);
            if(secim5==1)
            {
                toplamtutar=toplamtutar+1500;
            }
            else if(secim5==2)
            {
                toplamtutar=toplamtutar+2750;
            }
            else if(secim5==3)
            {
                toplamtutar=toplamtutar+8832;
            }
            else
            {
                printf("Hatali Islem Tekrar Deneyiniz\n");
            }
            printf("***********************\n");
            printf("Toplam sepet tutariniz = %.2f",toplamtutar);//Float virgulden sonra alti basamak gosteriyor bu kullanimdan sonra iki basamak gosterecek
            printf("\n***********************\n");
             printf("1- Sepete urun ekle\n");
            printf("2-Ana menuye don\n");
            printf("Seciminiz:");
            scanf("%d",&secim6);
        }
         else if(secim4==2)
        {
            printf("***********************\n");
            printf("Akilli saat kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n");
            printf("Akilli Saat-1 = 543.99 TL \n");
            printf("Akilli Saat-2 = 1324.50 TL \n");
            printf("Akilli Saat-3 = 850 TL \n");
            printf("***********************\n");
            printf("Seciminiz:");
            scanf("%d",&secim5);
            if(secim5==1)
            {
                toplamtutar=toplamtutar+543.99;
            }
            else if(secim5==2)
            {
                toplamtutar=toplamtutar+1324.50;
            }
            else if(secim5==3)
            {
                toplamtutar=toplamtutar+850;
            }
            else
            {
                printf("\n***********************\n");
                printf("Hatali Islem Tekrar Deneyiniz\n");
                printf("\n***********************\n");

            }
            printf("***********************\n");
            printf("Toplam sepet tutariniz = %.2f\n",toplamtutar);//Float virgulden sonra alti basamak gosteriyor bu kullanimdan sonra iki basamak gosterecek
            printf("***********************\n");
             printf("1- Sepete urun ekle\n");
            printf("2-Ana menuye don\n");
            printf("Seciminiz:");
            scanf("%d",&secim6);
        }
         else if(secim4==3)
        {
            printf("***********************\n");
            printf("Yazici kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n");
            printf("1- Yazici A   = 553.50 TL \n");
            printf("2- Yazici B = 848.20 TL \n");
            printf("3- Yazici C = 1433.33 TL\n");
            printf("***********************\n");
            printf("Seciminiz:");
            scanf("%d",&secim5);
            if(secim5==1)
            {
                toplamtutar=toplamtutar+553.50;
            }
            else if(secim5==2)
            {
                toplamtutar=toplamtutar+848.20;
            }
            else if(secim5==3)
            {
                toplamtutar=toplamtutar+1433.33;
            }
            else
            {
                printf("\n***********************\n");
              printf("Hatali Islem Tekrar Deneyiniz\n");
              printf("\n***********************\n");

            }
            printf("***********************\n");
            printf("Toplam sepet tutariniz = %.2f\n",toplamtutar);//Float virgulden sonra alti basamak gosteriyor bu kullanimdan sonra iki basamak gosterecek
            printf("***********************\n");
            printf("1- Sepete urun ekle\n");
            printf("2-Ana menuye don\n");
            printf("Seciminiz:");
            scanf("%d",&secim6);
            printf("\n***********************\n");
        }
         else if(secim4==4)
        {
            printf("***********************\n");
            printf("Bilgisayar kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n");
            printf("1- Bilgisayar X   = 14600 TL \n");
            printf("2- Bilgisayar Y = 12964 TL \n");
            printf("3- Bilgisayar Z  = 22920 TL\n");
            printf("4- Bilgisayar Q  = 36123 TL\n");
            printf("***********************\n");
            printf("Seciminiz:");
            scanf("%d",&secim5);
            if(secim5==1)
            {
                toplamtutar=toplamtutar+14600;
            }
            else if(secim5==2)
            {
                toplamtutar=toplamtutar+12964;
            }
            else if(secim5==3)
            {
                toplamtutar=toplamtutar+22920;
            }
            else if (secim5==4)
            {
                toplamtutar=toplamtutar+36123;
            }
            else
            {
                printf("\n***********************\n");
                printf("Hatali Islem Tekrar Deneyiniz\n");
                printf("\n***********************\n");
            }
            printf("***********************\n");
            printf("Toplam sepet tutariniz = %.2f\n",toplamtutar);//Float virgulden sonra alti basamak gosteriyor bu kullanimdan sonra iki basamak gosterecek
            printf("***********************\n");
             printf("1- Sepete urun ekle\n"); //bu kisim icinde ayri bir if else tanimladim secim1==1 durumda oldugu gibi ayni mantigi kullanarak ana menuye don secilirse eger dongu kirilip ana menu dongusune geciyor.
            printf("2-Ana menuye don\n");
            printf("Seciminiz:");
            scanf("%d",&secim6);
            printf("\n***********************\n");
        }
        else
        {
            printf("\n***********************\n");
            printf("Hatali Islem!!!\n");
            printf("\n***********************\n");
            break;
        }
		if(secim6==1)
		{
        printf("Hangi Kategoriden Urun Eklemek Istersiniz?\n");
        printf("1- Akilli Telefon.\n");
         printf("2- Akilli Saat.");
          printf("3-Yazici\n");
           printf("4-Bilgisayar\n");
        printf("\n***********************\n");
        printf("Seciminiz:");
        scanf("%d",&secim4);
			}
			else if(secim6==2)
			{
				break;
				}
				else
				{
				    printf("\n***********************\n");
					printf("\nHatali Islem Tekrar Deneyiniz\n");
					printf("\n***********************\n");
					break;
                }
			}
	}
	else if (secim1==4)
         {
            printf("***********************\n");
            printf("Iyi gunler dileriz :) \n");
            printf("Program Sonlandiriliyor...\n");
            printf("***********************\n");
            break; //program donguden olustugu icin break komutu ile programi sonlandiriyorum
        }
        else
        {
            printf("\n***********************\n");
            printf("\nHatali secim yaptiniz lutfen tekrar seciniz!!!!\n\n");//Ana menude verilen dort secenek yerine farkli bir secim yapildiginda hata verme mesaji
            printf("\n***********************\n");
        }
}
	return 05;
}
