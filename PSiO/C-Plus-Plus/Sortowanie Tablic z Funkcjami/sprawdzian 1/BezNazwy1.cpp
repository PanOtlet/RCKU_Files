#include<iostream>
using namespace std;

void generuj (int[],int);
void wypisz (int[],int);
int suma_d (int[],int);
int suma_u (int[],int);

int main()
{
    int a [10];
    generuj(a,10);
    cout<<"Oto wygenerowana tablica:\n";
    wypisz(a,10);
    cout<<'\n'<<'\n';
    cout<<"Suma liczb dodatnich: "<<suma_d(a,10)<<'\n';
    cout<<"Suma liczb ujemnych: "<<suma_u(a,10)<<'\n';
    cout<<"\n";
    system("pause");
    return 0;
}

void generuj (int tab[],int)
{
     srand(time(0));
     for (int i=0;i<10;i++)
         tab[i]=rand()%101-50;
}

void wypisz (int tab[],int)
{
     for(int i=0;i<10;i++)
             cout<<tab[i]<<", ";
}

int suma_d (int tab[],int)
{
     int j=0;
     for(int i=0;i<10;i++)
             if (tab[i]>0)
                j=j+tab[i];
     return j;
}       

int suma_u (int tab[],int)
{
     int j=0;
     for(int i=0;i<10;i++)
             if (tab[i]<0)
                j+=tab[i];
     return j;
}  
