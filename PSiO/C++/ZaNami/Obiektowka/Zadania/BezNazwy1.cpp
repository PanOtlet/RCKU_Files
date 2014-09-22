#include<iostream>

using namespace std;

class prostokat
{
      private:
              int bok1;
              int bok2;
      public:
             prostokat()
             {
              bok1=0;
              bok2=0;
             }
             prostokat(int dl, int sz)
             {
              bok1=dl;
              bok2=sz;
             }
             int daj_dlugosc();
             int daj_wysokosc();
             int oblicz_pole();
             int oblicz_obwod();
             void wypisz_pole();
             void wypisz_obwod();
             friend bool czy_kwadrat(prostokat A);
};

int prostokat:: daj_dlugosc()
{
    return bok1;
}

int prostokat:: daj_wysokosc()
{
    return bok2;
}

int prostokat:: oblicz_pole()
{
    return bok1*bok2;
}

int prostokat:: oblicz_obwod()
{
    return 2*(bok1+bok2);
}

void prostokat:: wypisz_pole()
{
     cout<<oblicz_pole();
}

void prostokat:: wypisz_obwod()
{
     cout<<oblicz_obwod();
}

bool czy_kwadrat(prostokat A)
{
     if (A.bok1==A.bok2)
        return true;
     else
         return false;
}

int main()
{
    int a,b;
    cout<<"Podaj wysokosc obiektu P1: ";
    cin>>a;
    cout<<"Podaj szerokosc obiektu P1: ";
    cin>>b;
    prostokat P1(a,b);
    cout<<"Podaj wysokosc obiektu P2: ";
    cin>>a;
    cout<<"Podaj szerokosc obiektu P2: ";
    cin>>b;
    prostokat P2(a,b);
    cout<<'\n'<<"Wymiary prostokata P1:"<<'\n';
     cout<<"Dlugosc: "<<P1.daj_dlugosc()<<'\n';
     cout<<"Wysokosc: "<<P1.daj_wysokosc()<<'\n';
     cout<<'\n';
    cout<<"Wymiary prostokata P2:"<<'\n';
     cout<<"Dlugosc: "<<P1.daj_dlugosc()<<'\n';
     cout<<"Wysokosc: "<<P1.daj_wysokosc()<<'\n';
     cout<<'\n';
    cout<<"Pola:"<<'\n';
     cout<<"P1: ";P1.wypisz_pole();cout<<'\n';
     cout<<"P2: ";P2.wypisz_pole();cout<<'\n';
    cout<<'\n'<<"Obwod:"<<'\n';
     cout<<"P1: ";P1.wypisz_obwod();cout<<'\n';
     cout<<"P2: ";P2.wypisz_obwod();cout<<'\n'<<'\n';
     if (czy_kwadrat(P1))
        cout<<"Prostokat P1 jest kwadratem"<<'\n';
     else
         cout<<"Prostokat P1 nie jest kwadratem"<<'\n';
     if (czy_kwadrat(P2))
        cout<<"Prostokat P2 jest kwadratem"<<'\n';
     else
         cout<<"Prostokat P2 nie jest kwadratem"<<'\n';
       
    system ("pause");
    return 0;
}
