#include <iostream>

using namespace std;

int main()
{
    int tab[10],i;
    int *wsk=tab;
    cout<<"Wype³nianie tablicy.\n";
    for (i=0;i<10;i++)
    {
        cout<<"Podaj element "<<i+1<<": ";
        cin>>*wsk;
        wsk=wsk+1;
    }
    wsk=tab;
    cout<<"\nWypisywanie elementow tablicy.\n";
    for (i=0;i<10;i++)
    {
        cout<<*wsk<<"  ";
        wsk=wsk+1;
    }
    system ("pause");
    return 0;
}
