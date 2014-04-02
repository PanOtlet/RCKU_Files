#include <iostream>

using namespace std;
int main()
{
    int a,b;
    cout<<"Podaj liczbe a: ";
    cin>>a;
    cout<<"Podaj liczbe b: ";
    cin>>b;
    if (a%b==0)
       cout<<a<<"/"<<b<<"="<<a/b;
    else
       cout<<"Calosci: "<<a/b<<'\n'<<"Reszta z dzielenia: "<<a%b;
    cout<<'\n';
    system("pause");
    return 0;
}
