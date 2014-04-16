#include <iostream>
using namespace std;
int main()
{
    int tab[10];
    srand(time(0));
    for (int i=0;i<10;i++)
        tab[i]=rand() % 101;
    cout<<'\n'<<"Oto tablica, ktora wylosowales"<<'\n';
    for (int j=0;j<10;j++)
        cout<<tab[j]<<"  ";
    int sumap=0;
    int suman=0;
    for (int i=0;i<10;i++)
    if (tab[i]%2==0)
        sumap+=tab[i];
        else
        suman+=tab[i];
    cout<<'\n'<<"Suma elementow parzystych wynosi: "<<sumap;
    cout<<'\n'<<"Suma elementow nieparzystych wynosi: "<<suman;
    cout<<'\n';
    system("pause");
    return 0;
}
