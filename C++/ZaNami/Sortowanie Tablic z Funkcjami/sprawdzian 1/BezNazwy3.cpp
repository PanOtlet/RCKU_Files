#include<iostream>
#include<iomanip>
using namespace std;

void generuj (int[][5],int,int);
void wypisz (int[][5],int,int);
void zamien_k (int[][5],int,int);

int main()
{
    int a [5][5];
    generuj(a,5,5);
    cout<<"Oto wygenerowana tablica:\n";
    wypisz(a,5,5);
    cout<<'\n'<<'\n';
    cout<<"Zamieniona tablica:"<<'\n'<<'\n';
    zamien_k(a,5,5);
    wypisz(a,5,5);
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

void zamien_k(int tab[][5],int,int)
{
     int pom=0;
         for(int j=0;j<5;j++)
         {
                 pom=tab[j][0];
                 tab[j][0]=tab[j][4];
                 tab[j][4]=pom;
         }
}
