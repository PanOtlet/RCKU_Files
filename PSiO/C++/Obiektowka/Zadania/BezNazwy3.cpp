#include<iostream>

using namespace std;

class pudelko
{
      private:
              int wys;
              int bok1;
              int bok2;
      public:
             pudelko()
             {
              wys=0;
              bok1=0;
              bok2=0;
             }
             pudelko (int w, int b1, int b2)
             {
              wys=w;
              bok1=b1;
              bok2=b2;
             }
             int oblicz_pole();
             int oblicz_objetosc();
             int oblicz_krawedzie();
             void wypisz_pole();
             void wypisz_objetosc();
             void wypisz_krawedzie();
};

int pudelko::oblicz_pole()
{
    return (2*bok1*bok2)+(2*bok2*wys)+(2*bok1*wys);
}

int pudelko::oblicz_objetosc()
{
    return (bok1*bok2)*wys;
}

int pudelko::oblicz_krawedzie()
{
    return 4*bok1+4*bok2+4*wys;
}

void pudelko::wypisz_pole()
{
     cout<<oblicz_pole();
}

void pudelko::wypisz_objetosc()
{
     cout<<oblicz_objetosc();
}

void pudelko::wypisz_krawedzie()
{
     cout<<oblicz_krawedzie();
}

int main()
{
    float w,b1,b2;
    cout<<"Podaj wysokosc prostopadlosciu: ";
    cin>>w;
    cout<<"Podaj bok 1 prostopadlosciu: ";
    cin>>b1;
    cout<<"Podaj bok 2 prostopadlosciu: ";
    cin>>b2;
    pudelko zz(w,b1,b2);
    cout<<'\n';
     cout<<"Pole: ";zz.wypisz_pole();cout<<'\n';
     cout<<"Objetosc: ";zz.wypisz_objetosc();cout<<'\n';
     cout<<"Suma krawedzi: ";zz.wypisz_krawedzie();cout<<'\n';
    cout<<'\n';
    system ("pause");
    return 0;
}
