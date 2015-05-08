#include <iostream>
using namespace std;

void generuj(int[],int);
void wypisz(int[],int);
void sortuj(int[],int);

int main()
{
    int a [10];
    generuj(a,10);
    cout<<"Oto wygenerowana tablica:\n";
    wypisz(a,10);
    sortuj(a,10);
    cout<<"\nOto posortowana tablica:\n";
    wypisz(a,10);
    cout<<"\n";
    system("pause");
}

void generuj(int tab[],int ile)
{
     srand(time(0));
     for (int i=0;i<ile;i++)
         tab[i]=rand()%101;
}

void wypisz(int tab[],int ile)
{
     for (int i=0;i<ile;i++)
         cout<<tab[i]<<", ";
}

void sortuj(int tab[],int ile)
{
     bool przestaw;
     int pom;
     do
     {
         ile--;
         przestaw=false;
         for (int i=0;i<=ile;i++)
             if (tab[i]>tab[i+1])
             {
                pom=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=pom;
                przestaw=true;
                }
     } while(przestaw);
}
