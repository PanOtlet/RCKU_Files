#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int tab[7][7];
    for (int j=0;j<7;j++)
    {
        if (j=0)
        {
           for (int i=0;i<7;i++)
               tab[i][j]=0;
        }
        else
        {
            for (int i=1;i<7;i++)
            {
                tab[i][j]=0;
        tab[i][6]=1;
            }
        }
    }
    system ("pause");
    cout<<"Oto wylosowana tablica:"<<'\n';
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
            cout<<setw(3)<<tab[i][j];
        cout<<'\n';
    }
    cout<<'\n';
    system ("pause");
    return 0;
}
