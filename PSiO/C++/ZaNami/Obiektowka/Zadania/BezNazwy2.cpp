#include<iostream>

using namespace std;

class kolo
{
      private:
              float promien;
      public:
             kolo()
             {
              promien=0;
             }
             kolo(float r)
             {
              promien=r;
             }
             float oblicz_pole();
             float oblicz_obwod();
             void wypisz_pole();
             void wypisz_obwod();
             friend void Porownaj_kola(kolo A, kolo B);
};

float kolo::oblicz_pole()
{
    return 3.14*(promien*promien);
}

float kolo::oblicz_obwod()
{
    return 2*3.14*promien;
}

void kolo::wypisz_pole()
{
     cout<<oblicz_pole();
}

void kolo::wypisz_obwod()
{
     cout<<oblicz_obwod();
}

void Porownaj_kola(kolo A, kolo B)
{
     float a,b;
     a=A.promien;
     b=B.promien;
     if (a==b)
        cout<<"Kola sa rowne";
     else
         cout<<"Kola nie sa rowne";
     cout<<'\n';
}

int main()
{
    float r1,r2;
    cout<<"Podaj promien K1: ";
    cin>>r1;
    kolo K1(r1);
    cout<<"Podaj promien K2: ";
    cin>>r2;
    kolo K2(r2);
    cout<<'\n';
    cout<<"Pole:"<<'\n';
     cout<<"K1: ";K1.wypisz_pole();cout<<'\n';
     cout<<"K2: ";K2.wypisz_pole();cout<<'\n';
    cout<<'\n'<<"Obwod:"<<'\n';
     cout<<"K1: ";K1.wypisz_obwod();cout<<'\n';
     cout<<"K2: ";K2.wypisz_obwod();cout<<'\n'<<'\n';
    Porownaj_kola(r1,r2);
    cout<<'\n';
    system ("pause");
    return 0;
}
