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
    int k,pom;
    bool przestaw;
    for (int j=0;j<5;j++)
    {
        k=4;
        do
        {
             k--;
             przestaw=false;
             for (int i=0;i<=k;i++)
                 if (tab[i][j]<tab[i+1][j])
                 {
                    pom=tab[i][j];
                    tab[i][j]=tab[i+1][j];
                    tab[i+1][j]=pom;
                    przestaw=true;
                 }
        } while (przestaw);
    }
    cout<<'\n'<<"Oto posortowana tablica:"<<'\n';
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
            cout<<setw(3)<<tab[i][j];
        cout<<'\n';
    }
    system("pause");
    return 0;
}
