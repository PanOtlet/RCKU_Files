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
    osoba uczen[3];
    cout<<"Wypelniamy tablice z danymi uczniow:\n\n";
    system("pause");
    for (int i=0;i<3;i++)
    {
        system("cls");
        cout<<"Podaj imie ucznia "<<i+1<<": ";
        cin>>uczen[i].imie;
        cout<<"Podaj nazwisko ucznia "<<i+1<<": ";
        cin>>uczen[i].nazwisko;
        cout<<"Podaj wiek ucznia "<<i+1<<": ";
        cin>>uczen[i].wiek;
        cout<<"Podaj plec ucznia "<<i+1<<": ";
        cin>>uczen[i].plec;
    }
    system ("cls");
    cout<<"Informacja o uczniach:"<<'\n'<<'\n';
    for (int i=0;i<3;i++)
    {
        cout<<"Dane o uczniu nr "<<i+1<<": "<<'\n';
        cout<<"Imie: "<<uczen[i].imie<<'\n';
        cout<<"Nazwisko: "<<uczen[i].nazwisko<<'\n';
        cout<<"Wiek: "<<uczen[i].wiek<<'\n';
        cout<<"Plec: "<<uczen[i].plec<<"\n\n";
    }
    system ("pause");
    return 0;
}
