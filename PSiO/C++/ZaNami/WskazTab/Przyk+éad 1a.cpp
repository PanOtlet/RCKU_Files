#include <iostream>

using namespace std;

int main()
{
    int tab[10],i;
    cout<<"Wype³nianie tablicy.\n";
    for (i=0;i<10;i=i+1)
    {
        cout<<"Podaj element "<<i+1<<": ";
        cin>>tab[i];
    }
    cout<<"\nWypisywanie elementow tablicy.\n";
    for (i=0;i<10;i=i+1)
        cout<<tab[i]<<"  \n";
    cout<<"\n\nKolejne elementy tablicy znajduja sie w komorkach:\n";
    for (i=0;i<10;i++)
        cout<<&tab[i]<<"  \n";
    system ("pause");
    return 0;
}
