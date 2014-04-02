#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int tab[5][5];
    srand(time(0));
    for (int i=0;i<5;i++)
        for (int j=0;j<5;j++)
            tab[i][j]=rand() % 101-100;
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
            sumaa+=tab[i][j];
    cout<<"Suma elementuf dodatnich wynosi: "<<sumaa<<'\n';
    for (int i=0;i<5;i++)
        for (int j=0;j<5;j++)
        {
            if 
            sumab+=tab[i][j];
    cout<<"Suma elementuf ujemnych wynosi: "<<sumab<<'\n';
    system("pause");
    return 0;
}
