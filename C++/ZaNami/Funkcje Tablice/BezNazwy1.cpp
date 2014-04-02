#include <iostream>
using namespace std;

void generuj (int[]);
void wypisz (int[]);
int suma (int[]);
double srednia (int[]);


int main()
{
    int tab[10];
    srand(time(0));
    cout<<"Oto wygenerowana tablica:"<<'\n';
    generuj(tab);
    wypisz(tab);
    cout<<'\n';
    cout<<"Suma elementow: "<<suma(tab);
    cout<<'\n';
    cout<<"Srednia arytmetyczna: "<<srednia(tab);
    cout<<'\n';
    system("pause");
    return 0;
}

void generuj(int a[])
{
     for (int i=0;i<10;i++)
         a[i]=rand()%101-50;
}

void wypisz(int a[])
{
     for (int i=0;i<10;i++)
         cout<<a[i]<<", ";
}

int suma(int a[])
{
    int s=0;
    for (int i=0;i<10;i++)
        s+=a[i];
    return s;
}

double srednia (int a[])
{
       return (double) suma(a)/10;
}
