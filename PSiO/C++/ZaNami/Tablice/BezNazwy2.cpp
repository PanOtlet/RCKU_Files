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
    int iloczyn=1;
    for (int i=0;i<5;i++)
        iloczyn*=tab[i];
    cout<<'\n'<<"Iloczyn elementow wynosi: "<<iloczyn;
    cout<<'\n'<<"Oto tablica, ktora podales, ale tym razem wspak"<<'\n';
    for (int j=4;j>=0;j--)
        cout<<tab[j]<<"  ";
    cout<<'\n';
    system("pause");
    return 0;
}
