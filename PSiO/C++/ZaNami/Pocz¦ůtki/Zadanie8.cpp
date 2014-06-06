#include <iostream>

using namespace std;

int main()
{
    int r,l,p;
    cout<<"Witam!\nJestem programem, ktory oblicza pole i dlugosc okregu!"<<'\n';
    cout<<"Podaj promien kola: ";
    cin>>r;
    p=3.14*(r*r);
    l=2*3.14*r;
    cout<<"Liczba Pi wynosi: 3.14"<<'\n';
    cout<<"Pole wynosi: "<<p<<'\n';
    cout<<"Dlugosc okregu wynosi: "<<l<<'\n';
    system("pause");
    return 0;
}
