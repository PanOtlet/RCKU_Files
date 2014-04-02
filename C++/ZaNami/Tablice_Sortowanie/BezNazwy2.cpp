#include <iostream>
using namespace std;
int main()
{
    int tab[20];
    srand(time(0));
    for (int i=0;i<20;i++)
        tab[i]=rand()%50+1;
    cout<<"Oto wylosowana tablica:"<<'\n';
    for (int i=0;i<20;i++)
        cout<<tab[i]<<" ";
    int pom;
    for (int i=0;i<10;i++)
        {
           pom=tab[i];
           tab[i]=tab[19-i];
           tab[19-i]=pom;
        }
    cout<<'\n';
    cout<<"Oto poprzestawiana tablica:"<<'\n';
    for (int i=0;i<20;i++)
        cout<<tab[i]<<" ";
    cout<<'\n';
    system("pause");
    return 0;
}
