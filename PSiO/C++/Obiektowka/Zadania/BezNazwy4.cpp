#include<iostream>
#include<cmath>
//nie gotowy
using namespace std;

class kula
{
      private:
              int wys;
              int pro;
      public:
             kula()
             {
              pro=0;
             }
             kula (int r)
             {
              pro=r;
             }
             double oblicz_pole();
             double oblicz_objetosc();
             void wypisz_pole();
             void wypisz_objetosc();
};

double kula::oblicz_pole()
{
    return (4*M_PI*(pro*pro));
}

double kula::oblicz_objetosc()
{
    return ((M_PI*(pro*pro*pro))/3)*4;
}

void kula::wypisz_pole()
{
     cout<<oblicz_pole();
}

void kula::wypisz_objetosc()
{
     cout<<oblicz_objetosc();
}

int main()
{
    float r;
    cout<<"Podaj srednice: ";
    cin>>r;
    kula zz(r);
    cout<<'\n';
     cout<<"Pole: ";zz.wypisz_pole();cout<<'\n';
     cout<<"Objetosc: ";zz.wypisz_objetosc();cout<<'\n';
    cout<<'\n';
    system ("pause");
    return 0;
}
