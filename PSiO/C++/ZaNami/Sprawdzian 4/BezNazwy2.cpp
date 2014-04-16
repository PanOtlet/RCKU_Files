#include <iostream>
using namespace std;

void nieparzyste(int,int);

int main()
{
    int a,b;
    cout<<"Podaj poczatek przedzialu: ";
    cin>>a;
    cout<<"Podaj koniec przedzialu: ";
    cin>>b;
    nieparzyste(a,b);
    cout<<'\n';
    system ("pause");
    return 0;
    
}

void nieparzyste (int a, int b)
{
int i;
for (i=a;b<i;i++);
    if (a%2==1)
       cout<<i<<'\n';       
}
