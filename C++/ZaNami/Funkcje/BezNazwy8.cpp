#include <iostream>
using namespace std;

void parzyste(int,int);
void nieparzyste(int,int);

int main()
{
    int p,k;
    cout<<"Podaj pocz.  przedzialu: ";
    cin>>p;
    cout<<"Podaj koniec przedzialu: ";
    cin>>k;
    cout<<"Liczby parzyste:"<<'\n';
    parzyste(p,k);
    cout<<"Liczby nieparzyste:"<<'\n';
    nieparzyste(p,k);
    system ("pause");
    return 0;
}
