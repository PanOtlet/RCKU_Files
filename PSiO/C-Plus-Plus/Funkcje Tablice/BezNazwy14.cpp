#include <iostream>
#include <iomanip>

using namespace std;

void generuj (int[][6]);
void wypisz (int[][6]);


int main()
{
    int tab1[6][6];
    int tab2[6][6];
    srand(time(0));
    cout<<"Oto wygenerowana tablica nr 1:"<<'\n';
    generuj(tab1);
    wypisz(tab1);
    cout<<"Oto wygenerowana tablica nr 2:"<<'\n';
    generuj(tab2);
    wypisz(tab2);
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
