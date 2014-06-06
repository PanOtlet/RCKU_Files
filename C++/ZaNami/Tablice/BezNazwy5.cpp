#include <iostream>
using namespace std;
int main()
{
    int tab[10];
    srand(time(0));
    for (int i=0;i<10;i++)
        tab[i]=rand() % 201-100;
    cout<<'\n'<<"Oto tablica, ktora wylosowales"<<'\n';
    for (int j=0;j<10;j++)
        cout<<tab[j]<<"  ";
    int sumad=0;
    int sumau=0;
    for (int i=0;i<10;i++)
    if (tab[i]<0)
        sumau+=tab[i];
        else
        sumad+=tab[i];
    cout<<'\n'<<"Suma elementow ujemnych wynosi: "<<sumau;
    cout<<'\n'<<"Suma elementow dodatnich wynosi: "<<sumad;
    cout<<'\n';
    system("pause");
    return 0;
}
