#include<iostream>

using namespace std;

int main()
{
    float waga=68.5;
    float &wartosc = waga;
    cout<<"Wartosc zmiennej waga wynosi: "<<waga<<'\n';
    cout<<"Wartosc referencji wynosi: "<<wartosc<<'\n';
    waga=90;
    cout<<"Wartosc zmiennej waga wynosi: "<<waga<<'\n';
    cout<<"Wartosc referencji wynosi: "<<wartosc<<'\n';
    wartosc=23;
    cout<<"Wartosc zmiennej waga wynosi: "<<waga<<'\n';
    cout<<"Wartosc referencji wynosi: "<<wartosc<<'\n';
    system("pause");
    return 0;
}
