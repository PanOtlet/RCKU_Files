#include <iostream>
#include <cmath>

using namespace std;

void dzielniki1 (double liczba, double *s, double *ile);
void dzielniki2 (double liczba, double &s, double &ile);

int main()
{
    double liczba,s,ile;
    double *w_s=&s,*w_ile=&ile;
    cout<<"Program do ukazywania dzielnikow danej liczby"<<'\n'<<"Podaj liczbe: ";
    cin>>liczba;
    cout<<'\n'<<"Obliczenia wykonane za pomoca dzielniki1:"<<'\n';
    dzielniki1(liczba,w_s,w_ile);
    cout<<"Ilosc dzielnikow: "<<*w_ile<<'\n';
    cout<<"Suma dzielnikow: "<<*w_s<<'\n';
    cout<<'\n';
    dzielniki2(liczba,s,ile);
    cout<<"Obliczenia wykonane za pomoca dzielniki2:"<<'\n';
    cout<<"Ilosc dzielnikow: "<<ile<<'\n';
    cout<<"Suma dzielnikow: "<<s<<'\n';
    system("pause");
    return 0;
}

void dzielniki1 (double liczba, double *s, double *ile)
{
     for (int i=1;i<=liczba;i++)
         if ((int)liczba%i==0)
         {
            *ile+=1;
            *s+=i;
         }
}

void dzielniki2 (double liczba, double &s, double &ile)
{
     for (int i=1;i<=liczba;i++)
         if ((int)liczba%i==0)
         {
            ile+=1;
            s+=i;
         }
}
