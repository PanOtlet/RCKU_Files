#include <iostream>
using namespace std;
int main()
{
 int numer;
 do
 {
 cout<<"Podaj numer dnia tygodnia: ";
 cin>>numer;
 switch (numer)
        {
        case 1 : cout<<"Poniedzialek";
                break;
        case 2 : cout<<"Wtorek";
                break;
        case 3 : cout<<"Sroda";
                break;
        case 4 : cout<<"Czwartek";
                break;
        case 5 : cout<<"Piatek";
                break;
        case 6 : cout<<"Sobota";
                break;
        case 7 : cout<<"Niedziela";
        default: cout<<"O ile sie nie myle, to nie ma takiego dnia tygodnia :) ";
        };
 cout<<'\n';
 }
 while(numer<1 || numer>7);
 system("pause");
 return 0;
}
