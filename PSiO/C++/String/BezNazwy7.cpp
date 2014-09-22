#include<iostream>
#include<string>

using namespace std;

int main()
{
    string l;
    cout<<"Podaj liczbê: ";
    cin>>l;
    cout<<"Liczba po zmianie:"<<'\n';
    for (int i=0; i>=l.length(); i++)
        if (l%2==0)
           cout<<"0";
        else
            cout<<"1";
    cout<<'\n';
    system ("pause");
}
