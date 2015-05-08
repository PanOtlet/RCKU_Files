#include <iostream>

using namespace std;

class rownoleglobok
{
      private:
              int dla;
              int dlb;
              int wys;
              int Oblicz_Pole();
              int Oblicz_Obwod();
      public:
             rownoleglobok()
             {
              wys=0;
              dla=0;
              dlb=0;
             }
             rownoleglobok (int w, int b1, int b2)
             {
              wys=w;
              dla=b1;
              dlb=b2;
             }
             void Wypisz_Pole();
             void Wypisz_Obwod();
             friend void Jaki_Rownoleglobok();
};

int rownoleglobok::Oblicz_Pole()
{
    return dla*wys;
}

int rownoleglobok::Oblicz_Obwod ()
{
    return 2*(dla+dlb);
}

void rownoleglobok::Wypisz_Pole()
{
}

void rownoleglobok::Wypisz_Obwod()
{
}

void Jaki_Rownoleglobok()
{
     if (dla&dlb!=wys && dla!=dlb)
        cout<<"Jest to r
}


main()
{
      int a,b,h;
      cout<<"Podaj dlugosc podstawy: ";
      cin>>a;
      cout<<"Podaj dlugosc boczna: ";
      cin>>b;
      cout<<"Podaj wysokosc: ";
      cin>>h;
      rownoleglobok A(a,b,h);
      cout<<"Pole wynosi: "<<A.Wypisz_Pole();
      cout<<"Obwod wynosi: "<<A.Wypisz_Obwod();
      system ("pause");
      return 0;
}
