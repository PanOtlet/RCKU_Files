#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"By zatrzymac dzialanie programu wystarczy, ze zamiast liczby wpiszesz 666!"<<'\n';
    cout<<"Podaj cyfre: ";
    cin>>n;
    switch (n)
    {
        case 0 : cout<<"Zero";
                break;
        case 1 : cout<<"Jeden";
                break;
        case 2 : cout<<"Dwa";
                break;
        case 3 : cout<<"Trzy";
                break;
        case 4 : cout<<"Cztery";
                break;
        case 5 : cout<<"Piec";
                break;
        case 6 : cout<<"Szesc";
                break;
        case 7 : cout<<"Siedem";
                break;
        case 8 : cout<<"Osiem";
                break;
        case 9 : cout<<"Dziewiec";
                break;
        default: cout<<"To nie jest cyfra";
    }
    cout<<'\n';
    system("pause");
    return 0;
}
