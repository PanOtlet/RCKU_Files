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
    int j=19;
    bool przestaw;
    int pom;
    do
    {
        j--;
        przestaw=false;
        for (int i=0;i<=j;i++)
            if (tab[i]>tab[i+1])
            {
               pom=tab[i];
               tab[i]=tab[i+1];
               tab[i+1]=pom;
               przestaw=true;
            }
    } while(przestaw);
    cout<<'\n';
    cout<<"Oto posortowana tablica:"<<'\n';
    for (int i=0;i<20;i++)
        cout<<tab[i]<<" ";
    cout<<'\n';
    system("pause");
    return 0;
}
