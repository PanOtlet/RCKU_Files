#include <iostream>
using namespace std;
int main()
{
    int tab[20];
    srand(time(0));
    for (int i=0;i<20;i++)
        tab[i]=rand() % 50+1;
    cout<<'\n'<<"Oto tablica, ktora wylosowales"<<'\n';
    for (int j=0;j<20;j++)
        cout<<tab[j]<<"  ";
    int sumaa=0;
    int sumab=0;
    for (int i=0;i<20;i++)
    if (tab[i]<25)
        sumaa+=tab[i];
        else
        sumab+=tab[i];
    cout<<'\n'<<"Suma elementow mniejszych od 25 wynosi: "<<sumaa;
    cout<<'\n'<<"Suma elementow wiekszych od 25 wynosi: "<<sumab;
    cout<<'\n';
    system("pause");
    return 0;
}
