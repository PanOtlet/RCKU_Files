#include <iostream>
using namespace std;
int main()
{
    int tab[20];
    int tabs[20];
    srand(time(0));
    for (int i=0;i<20;i++)
        tab[i]=rand()%100+1;
    cout<<"Oto wylosowana tablica:"<<'\n';
    for (int i=0;i<20;i++)
        cout<<tab[i]<<" ";
    int j=0,k=19;
    for (int i=0;i<19;i++)
        if (tab[i]%2==0)
        {
         tabs[j]=tab[i];
         j++;
        }
        else
        {
         tabs[k]=tab[i];
         k--;
        }
    cout<<'\n';
    cout<<"Oto posortowana tablica:"<<'\n';
    for (int i=0;i<20;i++)
    {
        cout<<tabs[i]<<" ";
    }
    cout<<'\n';
    system("pause");
    return 0;
}
