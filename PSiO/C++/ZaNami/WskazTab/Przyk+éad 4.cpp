#include <iostream>

using namespace std;

void wypelnij (int *);
void wypisz (int *);

int main()
{
    int tab[10];
    cout<<"Wypelnianie tablicy.\n";
    wypelnij(tab);
    cout<<"\nWypisywanie elementow tablicy.\n";
    wypisz(tab);
    cout<<'\n';
    system("pause");
    return 0;
}

void wypelnij (int *wsk)
{
     int i;
     for (i=0;i<10;i++)
     {
         cout<<"Podaj element "<<i+1<<": ";
         cin>>*wsk;
         wsk=wsk+1;
     }
}

void wypisz (int *wsk)
{
     int i;
     for (i=0;i<10;i++)
     {
         cout<<*wsk<<"  ";
         wsk=wsk+1;
     }
}
