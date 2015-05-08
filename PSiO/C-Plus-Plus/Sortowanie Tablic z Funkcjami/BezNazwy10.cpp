#include<iostream>
#include<iomanip>
using namespace std;

void generuj(int [][6],int,int);
void wypisz(int [][6],int,int);
int suma_kolumny(int [][6],int,int);
int suma_wiersza(int [][6],int,int);
int suma_wszystkich(int [][6],int,int);
int suma(int [][6],int,int);
int suma_parzystych(int [][6],int,int);

int main()
{
    int a[6][6];
    generuj(a,6,6);
    cout<<"Oto wygenerowana tablica:\n";
    wypisz (a,6,6);
    cout<<"\n";
    for (int j=0;j<6;j++)
        cout<<"Suma kolumny "<<j+1<<": "<<suma_kolumny(a,6,j)<<'\n';
    cout<<'\n';
    for (int j=0;j<6;j++)
        cout<<"Suma wiersza "<<j+1<<": "<<suma_wiersza(a,j,6)<<'\n';
    cout<<'\n';
    cout<<"Suma wszystkiego: "<<suma_wszystkich(a,6,6)<<"\n\n";
    cout<<"Suma: "<<suma(a,6,6)<<"\n\n";
    cout<<"Suma parzystych: "<<suma_parzystych(a,6,6)<<"\n\n";
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

int suma_kolumny(int tab[][6],int w,int k)
{
    int z=0;
    for(int i=0;i<w;i++)
            z+=tab[i][k];
    return z;
}

int suma_wiersza(int tab[][6],int w,int k)
{
    int z=0;
    for(int i=0;i<k;i++)
            z+=tab[w][i];
    return z;
}
            
int suma_wszystkich(int tab[][6],int w, int k)
{
    int z=0;
    for(int i=0;i<w;i++)
            for(int j=0;j<k;j++)
                    z+=tab[i][j];
    return z;
}
            
int suma(int tab[][6],int w, int k)
{
    int z=0;
    for(int i=0;i<w;i++)
            z+=tab[i][i];
    return z;
}
            
int suma_parzystych(int tab[][6],int w, int k)
{
    int z=0;
    for(int i=0;i<w;i++)
            for(int j=0;j<k;j++)
                    if (tab[i][j]%2==0)
                       z+=tab[i][j];
    return z;
}
