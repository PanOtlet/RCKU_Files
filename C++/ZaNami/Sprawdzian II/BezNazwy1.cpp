#include <iostream>
using namespace std;
int main()
{
    int tab[10];
    srand(time(0));
    for (int i=0;i<10;i++)
        tab[i]=rand()%100+1;
    cout<<"Oto wylosowana tablica:"<<'\n';
    for (int i=0;i<10;i++)
            cout<<tab[i]<<" ";
    cout<<'\n';
    for (int i=0;i<9;i++);
    
    system ("pause");
    return 0;
}
