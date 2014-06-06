#include<iostream>
#include<iomanip>
using namespace std;

void generuj(int [][6],int,int);
void wypisz(int [][6],int,int);
int suma_kolumny(int [][6],int,int);

int main()
{
    int z;
    int a[6][6];
    generuj(a,6,6);
    cout<<"Oto wygenerowana tablica:\n";
    wypisz (a,6,6);
    cout<<"\n";
    system("pause");
    return 0;
}

void generuj (int tab[][6],int w, int k)
{
     srand(time(0));
     for(int i=0;i<w;i++)
             for (int j=0;j<k;j++)
                 tab[i][j]=rand()%73-36;
}

void wypisz(int tab[][6],int w, int k)
{
     for(int i=0;i<w;i++)
     {
             for(int j=0;j<k;j++)
                     cout<<setw(5)<<tab[i][j];
             cout<<'\n';
     }
}
