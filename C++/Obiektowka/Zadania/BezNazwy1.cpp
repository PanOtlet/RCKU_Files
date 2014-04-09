#include<iostream>
#include<cmath>

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
}

int main()
{
    prostokat P1(p1_a,p1_b);
    prostokat P2(p2_a,p2_b);
    int a1,b1,a2,b2;
    cout<<"Podaj wysokosc obiektu P1: ";
    cin>>a1;
    cout<<"Podaj szerokosc obiektu P1: ";
    cin>>b1;
    cout<<"Podaj wysokosc obiektu P2: ";
    cin>>a2;
    cout<<"Podaj szerokosc obiektu P2: ";
    cin>>b2;
    prostokat P1(a1,b1);
    
    
    
       
    system ("pause");
    return 0;
}
