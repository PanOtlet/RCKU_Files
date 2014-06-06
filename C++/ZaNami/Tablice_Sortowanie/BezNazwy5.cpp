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
    for (int i=0;i<5;i++)
    {
        k=4;
        do
        {
             k--;
             przestaw=false;
             for (int j=0;j<=k;j++)
                 if (tab[i][j]<tab[i][j+1])
                 {
                    pom=tab[i][j];
                    tab[i][j]=tab[i][j+1];
                    tab[i][j+1]=pom;
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
