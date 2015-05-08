#include <iostream>

using namespace std;

int main()
{
    int a,b,h,o,p;
    cout<<"Witam!\nJestem programem, ktory oblicza -Prostopadloscian-!"<<'\n';
    cout<<"Podaj bok a: ";
    cin>>a;
    cout<<"Podaj bok b: ";
    cin>>b;
    cout<<"Podaj wysokosc: ";
    cin>>h;
    p=(2*a*b)+(2*b*h)+(2*a*h);
    o=a*b*h;
    cout<<"Pole wynosi: "<<p<<'\n';
    cout<<"Obwod wynosi: "<<o<<'\n';
    system("pause");
    return 0;
}
