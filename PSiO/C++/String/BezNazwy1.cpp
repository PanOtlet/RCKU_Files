#include<iostream>
#include<string>

using namespace std;

int main()
{
    string imie;
    char litera;
    cout<<"Podaj imie: ";
    cin>>imie;
    litera=imie[imie.length()-1];
    if (litera=='a')
       cout<<"To jest kobieta";
    else
        cout<<"To jest mezczyzna";
    cout<<'\n';
    system("pause");
}
