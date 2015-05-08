#include <iostream>
using namespace std;
int main()
{

 int numer,r,a,b,h;
    do
{
 system("cls");
 cout<<'\t'<<"Program do obliczania pol o bwodow figur!"<<'\n';
 cout<<'\t'<<'\t'<<'\t'<<"1 - Kwadrat"<<'\n';
 cout<<'\t'<<'\t'<<'\t'<<"2 - Prostokat"<<'\n';
 cout<<'\t'<<'\t'<<'\t'<<"3 - Rownoleglobok"<<'\n';
 cout<<'\t'<<'\t'<<'\t'<<"4 - Romb"<<'\n';
 cout<<'\t'<<'\t'<<'\t'<<"5 - Trojkat"<<'\n';
 cout<<'\t'<<'\t'<<'\t'<<"6 - Kolo"<<'\n';
 cout<<'\t'<<'\t'<<"Wybierz opcje: ";
 cin>>numer;
 switch (numer)
        {
        case 1 : cout<<"Podaj dlugosc boku: ";
                 cin>>a;
                 cout<<"Pole: "<<a<<"*"<<a<<"="<<a*a<<'\n';
                 cout<<"Obwod: "<<a<<"*4="<<a*4<<'\n';
                 break;
        case 2 : cout<<"Podaj dlugosc boku a: ";
                 cin>>a;
                 cout<<"Podaj dlugosc boku b: ";
                 cin>>b;
                 cout<<a<<"*"<<b<<"="<<a*b;
                 break;
        case 3 : cout<<"Podaj dlugosc boku: ";
                 cin>>a;
                 cout<<a<<"*"<<a<<"="<<a*a;
                 break;
        case 4 : cout<<"Podaj dlugosc boku: ";
                 cin>>a;
                 cout<<a<<"*"<<a<<"="<<a*a;
                 break;
        case 5 : cout<<"Podaj dlugosc boku: ";
                 cin>>a;
                 cout<<a<<"*"<<a<<"="<<a*a;
                 break;
        case 6 : cout<<"Podaj promien kola: ";
                 cin>>a;
                 cout<<"Pole: "<<3.14*(a*a)<<'\n';
                 cout<<"Obwod: "<<(2*3.14)*a;
                 break;
        default: cout<<"Twoj argument jest inwalida...";
        }
 cout<<'\n';
 system("pause");
 } while(numer!=7);
 return 0;
}
