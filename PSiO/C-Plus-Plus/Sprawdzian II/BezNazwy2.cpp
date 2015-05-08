#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int tab[5][5];
    srand(time(0));
    for (int i=0;i<5;i++)
        for (int j=0;j<5;j++)
        tab[i][j]=rand()%50+1;
    cout<<"Oto wylosowana tablica:"<<'\n';
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
            cout<<setw(3)<<tab[i][j];
        cout<<'\n';
    }
    int x;
    for (int i=0;i<5;i++)
    {
        x=0;
        for (int j=0;j<5;j++)
        {
            if (tab[i][j]>x)
            {
               x=tab[i][j];
            }
        }
        cout<<"Najwieksza liczba w wierszu "<<i+1<<" wynosi: "<<x<<'\n';
    }
    cout<<'\n';
    system ("pause");
    return 0;
}
