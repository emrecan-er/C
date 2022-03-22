#include <iostream>

using namespace std;

int main()
{
    int n;
    int sayi;
    int pozitifsayac=0,negatifsayac=0,sifirsayac=0;
    cout<<"Kac adet sayi girilecek : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>sayi;
       if(sayi>0)
       {
           pozitifsayac++;
       }
       else if (sayi<0)
       {
           negatifsayac++;
       }
       else
       {
           sifirsayac++;
       }
    }

    cout<<n<<" tane sayi icerisinden : "<<endl;
    cout<<"Pozitifler orani : "<<(float)pozitifsayac/n<<endl;
    cout<<"Negatifler orani : "<<(float)negatifsayac/n<<endl;
    cout<<"Sifirlar orani : "<<(float)sifirsayac/n<<endl;
    return 05;
}
