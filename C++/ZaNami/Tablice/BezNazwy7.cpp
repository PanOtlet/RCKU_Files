#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int tab[5][5];
    srand(time(0));
    for (int i=0;i<5;i++)
        for (int j=0;j<5;j++)
            tab[i][j]=rand() % 101;
    cout<<"Oto wylosowana tablica:"<<'\n';
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
    for (int j=0;j<5;j++)
    {
        suma=0;
        for (int i=0;i<5;i++)
            suma+=tab[i][j];
        cout<<"Suma kolumny "<<j<<": "<<suma<<'\n';
    }
    system("pause");
    return 0;
}
