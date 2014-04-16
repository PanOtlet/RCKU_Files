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

void parzyste (int a, int b)
{
for (a;a<=b;a++)
    if (a%2==0)
       cout<<a<<'\n';
}

void nieparzyste (int a, int b)
{
for (a;a<=b;a++)
    if (a%2==1)
       cout<<a<<'\n';
}
