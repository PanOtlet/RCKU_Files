#include <iostream>
using namespace std;
int main()
{
    int tab[5];
    cout<<"Podaj elementy tablicy: "<<'\n';
    for (int i=0;i<5;i++)
    {
             cout<<"Element "<<i+1<<": ";
             cin>>tab[i];
    }
    cout<<'\n'<<"Oto tablica, ktora podales"<<'\n';
    for (int j=0;j<5;j++)
        cout<<tab[j]<<"  ";
    int suma=0;
    for (int i=0;i<5;i++)
        suma+=tab[i];
    cout<<'\n'<<"Suma elementow wynosi: "<<suma;
    cout<<'\n';
    system("pause");
    return 0;
}
