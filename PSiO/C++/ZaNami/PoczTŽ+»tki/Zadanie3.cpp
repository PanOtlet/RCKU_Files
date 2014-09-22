#include <iostream>

using namespace std;

int main()
{
    int a,b,iloraz,reszta;
    cout<<"Podaj liczbê calkowita a: ";
    cin>>a;
    cout<<"Podaj liczbê calkowita b: ";
    cin>>b;
    iloraz=a/b;
    reszta=a%b;
    cout<<"Iloraz calkowity="<<iloraz<<'\n';
    cout<<"Reszta z dzielenia="<<reszta<<'\n';
    system("pause");
    return 0;
}
