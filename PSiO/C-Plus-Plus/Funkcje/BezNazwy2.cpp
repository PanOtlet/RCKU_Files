#include <iostream>
using namespace std;

void dzielniki(int);

int main()
{
    int a;
    cout<<"Podaj liczbe: ";
    cin>>a;
    dzielniki(a);
    cout<<'\n';
    system ("pause");
    return 0;
}

void dzielniki(int b)
{
    for (int i=1;i<=b;i++)
        if (b%i==0)
           cout<<i<<", ";
}
