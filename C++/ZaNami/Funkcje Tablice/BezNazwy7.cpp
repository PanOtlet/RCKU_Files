#include <iostream>
#include <iomanip>

using namespace std;

void generuj (int[][6]);
void wypisz (int[][6]);
int suma_kolumny (int[][6],int);
int suma_wiersza (int[][6],int);


int main()
{
    int tab[6][6];
    srand(time(0));
    cout<<"Oto wygenerowana tablica:"<<'\n';
    generuj(tab);
    wypisz(tab);
    for (int j=0;j<6;j++)
        cout<<"Suma kolumny "<<j+1<<": "<<suma_kolumny(tab,j)<<'\n';
    cout<<'\n';
    for (int j=0;j<6;j++)
        cout<<"Suma wiersza "<<j+1<<": "<<suma_wiersza(tab,j)<<'\n';
    cout<<'\n';
    system("pause");
    return 0;
}

void generuj(int a[][6])
{
    for (int i=0;i<6;i++)
        for (int j=0;j<6;j++)
        a[i][j]=rand()%72-36;
}

void wypisz(int a[][6])
{
    for (int i=0;i<6;i++)
    {
        for (int j=0;j<6;j++)
            cout<<setw(5)<<a[i][j];
        cout<<'\n';
    }
}

int suma_kolumny(int a[][6],int nr)
{
     int pom=0;
     for (int i=0;i<6;i++)
         pom=pom+a[i][nr];
     return pom;
}

int suma_wiersza(int a[][6],int nr)
{
     int pom=0;
     for (int i=0;i<6;i++)
         pom=pom+a[nr][i];
     return pom;
}
