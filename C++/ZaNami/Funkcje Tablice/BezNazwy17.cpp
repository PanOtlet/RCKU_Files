#include <iostream>
#include <iomanip>

using namespace std;

void generuj (int[][6]);
void wypisz (int[][6]);
int suma(int[][6],int[][6],int[][6]);
int wspak_wiersz(int[][6],int,int[][6]);
int wspak_kolumna(int[][6],int,int[][6]);


int main()
{
    int tab1[6][6];
    int tab2[6][6];
    int tab3[6][6];
    int tab4[6][6];
    srand(time(0));
    cout<<"Oto wygenerowana tablica nr 1:"<<'\n';
    generuj(tab1);
    wypisz(tab1);
    cout<<"Oto wygenerowana tablica nr 2:"<<'\n';
    generuj(tab2);
    wypisz(tab2);
    cout<<"Oto suma obu tablic:"<<'\n';
    suma(tab1,tab2,tab3);
    wypisz(tab3);
    cout<<"Oto wiersze wspak:"<<'\n';
    for(int i=0;i<6;i++)
    wspak_wiersz(tab3,i,tab4);
    wypisz(tab4);
    cout<<"Oto kolumny wspak:"<<'\n';
    for(int i=0;i<6;i++)
    wspak_kolumna(tab3,i,tab4);
    wypisz(tab4);
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

int suma(int a[][6],int b[][6],int c[][6])
{
    for (int i=0;i<6;i++)
    {
        for (int j=0;j<6;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
}

int wspak_wiersz(int a[][6],int w,int b[][6])
{
        for (int j=0;j<6;j++)
          b[w][j]=a[w][5-j];
 
}

int wspak_kolumna(int a[][6],int w,int b[][6])
{
        for (int j=0;j<6;j++)
        {
           b[w][j]=a[5-w][j]; 
        }
}
