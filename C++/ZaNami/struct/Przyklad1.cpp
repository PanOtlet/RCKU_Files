#include <iostream>

using namespace std;

struct osoba
{
       char imie[14];
       char nazwisko[20];
       int wiek;
       char plec[10];
};

int main()
{
    osoba uczen;
    cout<<"Podaj imie ucznia: ";
    cin>>uczen.imie;
    cout<<"Podaj nazwisko ucznia: ";
    cin>>uczen.nazwisko;
    cout<<"Podaj wiek ucznia: ";
    cin>>uczen.wiek;
    cout<<"Podaj plec ucznia: ";
    cin>>uczen.plec;
    system ("cls");
    cout<<"Informacja o uczniu:"<<'\n';
    cout<<uczen.imie<<" "<<uczen.nazwisko<<" "<<uczen.wiek<<" "<<uczen.plec<<"\n\n";
    system ("pause");
    return 0;
}
