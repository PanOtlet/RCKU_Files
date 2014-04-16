#include<iostream>
#include<iomanip>
using namespace std;

void generuj (int[][5],int,int);
void wypisz (int[][5],int,int);
int srednia (int[][5],int,int);

int main()
{
    int a [5][5];
    generuj(a,5,5);
    cout<<"Oto wygenerowana tablica:\n";
    wypisz(a,5,5);
    cout<<'\n'<<'\n';
    cout<<"Srednia: "<<srednia(a,5,5)<<'\n';
    cout<<"\n";
    system("pause");
    return 0;
}

void generuj (int tab[][5],int, int)
{
     srand(time(0));
     for(int i=0;i<5;i++)
             for (int j=0;j<5;j++)
                 tab[i][j]=rand()%73-36;
}

void wypisz(int tab[][5],int,int)
{
     for(int i=0;i<5;i++)
     {
             for(int j=0;j<5;j++)
                     cout<<setw(5)<<tab[i][j];
             cout<<'\n';
     }
}

int srednia (int tab[][5],int,int)
{
     float z=0;
     int y=0;
     int d=0;
     for(int i=0;i<5;i++)
             for (int j=0;j<5;j++)
             {
              y=+tab[i][j];
              d++;
             }
     z=y%d;
     return z;
}
