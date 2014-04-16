#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int tab[5][5];
    cout<<"Podaj elementy do tablicy: "<<'\n';
    for (int i=0;i<5;i++)
        for (int j=0;j<5;j++)
        {
            cout<<"Element "<<i<<","<<j<<": ";
            cin>>tab[i][j];
        }
    cout<<"Oto podana tablica:"<<'\n';
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
            cout<<setw(5)<<tab[i][j];
        cout<<'\n';
    }
    int suma=0;
    for (int i=0;i<5;i++)
        for (int j=0;j<5;j++)
            suma+=tab[i][j];
    cout<<"Suma elementuf wynosi: "<<suma<<'\n';
    for (int i=0;i<5;i++)
    {
        suma=0;
        for (int j=0;j<5;j++)
            suma+=tab[i][j];
        cout<<"Suma wiersza "<<i<<": "<<suma<<'\n';
    }
    system("pause");
    return 0;
}
