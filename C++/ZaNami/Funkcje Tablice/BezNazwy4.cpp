#include <iostream>
using namespace std;

void generuj (int[]);
void wypisz (int[]);
void zamien (int[]);


int main()
{
    int tab[20];
    srand(time(0));
    cout<<"Oto wygenerowana tablica:"<<'\n';
    generuj(tab);
    wypisz(tab);
    cout<<'\n';
    cout<<"Oto zamieniona tablica:"<<'\n';
    zamien(tab);
    wypisz(tab);
    cout<<'\n';
    system("pause");
    return 0;
}

void generuj(int a[])
{
     for (int i=0;i<20;i++)
         a[i]=rand()%101;
}

void wypisz(int a[])
{
     for (int i=0;i<20;i++)
         cout<<a[i]<<", ";
}

void zamien(int a[])
{
    int pom;
    for (int i=0;i<=18;i+=2)
    {
        pom=a[i];
        a[i]=a[i+1];
        a[i+1]=pom;
    }
}
