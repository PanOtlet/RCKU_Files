#include <iostream>
using namespace std;
int main()
{
    int tab[20];
    srand(time(0));
    for (int i=0;i<20;i++)
        tab[i]=rand()%100+1;
    cout<<"Oto wylosowana tablica:"<<'\n';
    for (int i=0;i<20;i++)
        cout<<tab[i]<<" ";
    int pom;
    for (int i=0;i<=19;i+=2)
    {
        pom=tab[i];
        tab[i]=tab[i+1];
        tab[i+1]=pom;
    }
    cout<<'\n';
    cout<<"Oto posortowana tablica:"<<'\n';
    for (int i=0;i<20;i++)
        cout<<tab[i]<<" ";
    cout<<'\n';
    system("pause");
    return 0;
}
