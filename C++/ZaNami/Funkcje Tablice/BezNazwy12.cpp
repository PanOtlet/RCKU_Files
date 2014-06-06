#include <iostream>
#include <iomanip>

using namespace std;

void generuj (int[][6]);
void wypisz (int[][6]);
int suma_kolumny (int[][6],int);
int suma_wiersza (int[][6],int);
int suma_wszystkiego (int[][6]);
int suma (int[][6]);
int suma_parzystych (int[][6]);
int suma_nieparzystych (int[][6]);
int suma_przez_3 (int[][6]);


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
    cout<<"Suma wszystkiego: "<<suma_wszystkiego(tab)<<'\n';
    cout<<'\n';
    cout<<"Suma wiersz/kolumna: "<<suma(tab)<<'\n';
    cout<<'\n';
    cout<<"Suma liczb parzystych: "<<suma_parzystych(tab)<<'\n';
    cout<<'\n';
    cout<<"Suma liczb nieparzystych: "<<suma_nieparzystych(tab)<<'\n';
    cout<<'\n';
    cout<<"Suma liczb podzielnych przez 3: "<<suma_przez_3(tab)<<'\n';
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

int suma_wszystkiego(int a[][6])
{
     int pom=0;
     for (int j=0;j<6;j++)
         for (int i=0;i<6;i++)
         {
          pom=pom+a[i][j];
         }
     return pom;
}

int suma(int a[][6])
{
     int pom=0;
     for (int i=0;i<6;i++)
     {
         pom=pom+a[i][i];
     }
     return pom;
}

int suma_parzystych(int a[][6])
{
     int pom=0;
     for (int j=0;j<6;j++)
         for (int i=0;i<6;i++)
             if (a[i][j]%2==0)
                pom=pom+a[i][j];
     return pom;
}

int suma_nieparzystych(int a[][6])
{
     int pom=0;
     for (int j=0;j<6;j++)
         for (int i=0;i<6;i++)
             if (a[i][j]%2==1)
                pom=pom+a[i][j];
     return pom;
}


int suma_przez_3(int a[][6])
{
     int pom=0;
     for (int j=0;j<6;j++)
         for (int i=0;i<6;i++)
             if (a[i][j]%3==0)
                pom=pom+a[i][j];
     return pom;
}
