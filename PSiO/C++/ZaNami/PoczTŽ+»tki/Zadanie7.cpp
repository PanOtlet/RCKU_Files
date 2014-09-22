#include <iostream>

using namespace std;

int main()
{
    int a,o,p;
    cout<<"Witam!\nJestem programem, ktory oblicza pole prostokata!"<<'\n';
    cout<<"Podaj dlugosc boku a: ";
    cin>>a;
    cout<<"Podaj dlugosc boku b: ";
    cin>>b;
    p=a*b;
    o=a*2+b*2;
    cout<<"Pole prostokatu wynosi: "<<p<<'\n';
    cout<<"Obwod prostokatu wynosi: "<<o<<'\n';
    system("pause");
    return 0;
}
