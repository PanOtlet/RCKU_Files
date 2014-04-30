#include<iostream>
#include<cmath>

using namespace std;

class walec
{
      private:
              double wys;
              double pro;
      public:
             walec()
             {
              wys=0;
              pro=0;
             }
             walec (double w, double r)
             {
              wys=w;
              pro=r;
             }
             double oblicz_pole();
             double oblicz_objetosc();
             void wypisz_pole();
             void wypisz_objetosc();
};

double walec::oblicz_pole()
{
    return (4*M_PI*(pro*pro)*wys);
}

double walec::oblicz_objetosc()
{   
    return (2*M_PI*(pro*pro))+(2*M_PI*pro*wys);
}

void walec::wypisz_pole()
{
     cout<<oblicz_pole();
}

void walec::wypisz_objetosc()
{
     cout<<oblicz_objetosc();
}

int main()
{
    double r,w;
    cout<<"Podaj srednice: ";
    cin>>r;
    cout<<"Podaj wysokosc: ";
    cin>>w;
    walec zz(w,r);
    cout<<'\n';
     cout<<"Pole: ";zz.wypisz_pole();cout<<'\n';
     cout<<"Objetosc: ";zz.wypisz_objetosc();cout<<'\n';
    cout<<'\n';
    system ("pause");
    return 0;
}
