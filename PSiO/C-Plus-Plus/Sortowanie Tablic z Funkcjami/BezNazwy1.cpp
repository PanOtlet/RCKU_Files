#include<iostream>
using namespace std;

void generuj (int[],int);
void wypisz (int[],int);
int suma(int[],int);
double srednia(int[],int);

int main()
{
    int a [15];
    generuj(a,15);
    cout<<"Oto wygenerowana tablica:\n";
    wypisz(a,15);
    cout<<"\n";
    cout<<"Suma elementow: I"<<suma(a,15);
    cout<<"Srednia elementow: "<<srednia(a,15)<<"\n";
    system("pause");
    return 0;
}

void generuj (int tab[])
{
     srand(time(0));
     for (int i=0;i<10;i++)
         tab[i]=rand()%101-50;
}

void wypisz (int tab[])
{
     for(int i=0;i<10;i++)
             cout<<tab[i]<<", ";
}

double srednia(int tab[],int ile)
{
       return (double)suma(tab,ile)/ile;
}
