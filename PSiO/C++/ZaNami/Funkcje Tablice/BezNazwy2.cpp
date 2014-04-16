#include <iostream>
using namespace std;

void generuj (int[]);
void wypisz (int[]);
void sortuj (int[]);


int main()
{
    int tab[10];
    srand(time(0));
    cout<<"Oto wygenerowana tablica:"<<'\n';
    generuj(tab);
    wypisz(tab);
    cout<<'\n';
    sortuj(tab);
    cout<<"Oto posortowana tablica:"<<'\n';
    wypisz(tab);
    cout<<'\n';
    system("pause");
    return 0;
}

void generuj(int a[])
{
     for (int i=0;i<10;i++)
         a[i]=rand()%101;
}

void wypisz(int a[])
{
     for (int i=0;i<10;i++)
         cout<<a[i]<<", ";
}

void sortuj(int a[])
{
    int j=9;
    bool przestaw;
    int pom;
    do
    {
        j--;
        przestaw=false;
        for (int i=0;i<=j;i++)
            if (a[i]>a[i+1])
            {
               pom=a[i];
               a[i]=a[i+1];
               a[i+1]=pom;
               przestaw=true;
            }
    } while(przestaw);
}
