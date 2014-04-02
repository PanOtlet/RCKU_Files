#include <iostream>

using namespace std;

class ulamek
{
      int licznik;
      int mianownik;
      public:
             int zapisz (int l, int m);
             void wypisz ()
             {
                  cout<<licznik<<"/"<<mianownik;
             }
};

int ulamek::zapisz (int l, int m)
{
    licznik=l;
    if (m!=0)
    {
              mianownik=m;
              return 1;
    }
    else
    {
        cout<<"Mianownik nie moze miec wartosci 0";
        return 0;
    }
}

int main()
{
    ulamek ul1,ul2,ul3;
    int licz,mian,w;
    ul1.zapisz(4,5);
    ul2.zapisz(1,7);
    cout<<"Pierwszy ulamek: ";
    ul1.wypisz();
    cout<<'\n'<<"Drugi ulamek: ";
    ul2.wypisz();
    cout<<'\n'<<'\n'<<"Podaj licznik swojego ulamka: ";
    cin>>licz;
    do
    {
      cout<<'\n'<<"Podaj mianownik swojego ulamka: ";
      cin>>mian;
      w=ul3.zapisz(licz,mian);
    } while (w==0);
    cout<<'\n'<<"Twoj ulamek: ";
    ul3.wypisz ();
    cout<<"\n\n";
    system("pause");
    return 0;
}
