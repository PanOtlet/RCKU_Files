#include <iostream>
using namespace std;

void generuj(int[],int);
void wypisz(int[],int);
void zamien(int[]);

int main()
{
    int a [20];
    generuj(a,20);
    cout<<"Oto wygenerowana tablica:\n";
    wypisz(a,20);
    zamien(a);
    cout<<"\nOto posortowana tablica:\n";
    wypisz(a,20);
    cout<<"\n";
    system("pause");
}

void generuj(int tab[],int ile)
{
     srand(time(0));
     for (int i=0;i<ile;i++)
         tab[i]=rand()%51;
}

void wypisz(int tab[],int ile)
{
     for (int i=0;i<ile;i++)
         cout<<tab[i]<<", ";
}

void zamien(int tab[])
{
     int pom=19;
     int j;
     for (int i;i<10;i++)
     {
         pom--;
         j=tab[i];
         tab[i]=tab[pom];
         tab[pom]=j;
     }    
}
