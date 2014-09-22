#include <iostream>

using namespace std;

void wypelnij (int *, int);
void wypisz (int *, int);

int main()
{
    int rozmiar=15;
    int tab[rozmiar];
    cout<<"Wypelnianie tablicy.\n";
    wypelnij(tab, rozmiar);
    cout<<"\nWypisywanie elementow tablicy.\n";
    wypisz(tab, rozmiar);
    cout<<'\n';
    system("pause");
    return 0;
}

void wypelnij (int *wsk, int roz)
{
     int i;
     for (i=0;i<roz;i++)
     {
         cout<<"Podaj element "<<i+1<<": ";
         cin>>*wsk;
         wsk=wsk+1;
     }
}

void wypisz (int *wsk, int roz)
{
     int i;
     for (i=0;i<roz;i++)
     {
         cout<<*wsk<<"  ";
         wsk=wsk+1;
     }
}
