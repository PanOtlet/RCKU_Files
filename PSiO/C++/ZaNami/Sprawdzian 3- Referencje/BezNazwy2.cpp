#include <iostream>

using namespace std;

void obliczenia1 (int a, int b, int *s, int *ile); 
void obliczenia2 (int a, int b, int &s, int &ile); 

int main()
{
    int a,b,s,ile;
    int *w_s=&s,*w_ile=&ile;
    cout<<"Podaj poczatek przedzialu: ";
    cin>>a;
    cout<<"Podaj koniec przedzialu: ";
    cin>>b;
    obliczenia1(a,b,w_s,w_ile);
    cout<<"\nSuma wynosi: "<<s<<'\n';
    cout<<"Ilosc liczb wynosi: "<<ile<<'\n';
    obliczenia2(a,b,s,ile);
    cout<<"\n\nSuma wynosi: "<<s<<'\n';
    cout<<"Ilosc liczb wynosi: "<<ile<<'\n';
    cout<<'\n';
    system("pause");
    return 0;  
    
}

void obliczenia1 (int a, int b, int *w_s, int *w_ile)
{
     for (int i=a; i<b; i++)
         if (i%2==0)
         {
            *w_s=+i;
            *w_ile++;
         }
}
void obliczenia2 (int a, int b, int &s, int &ile)
{
     for (int i=a; i<b; i++)
         if (i%2==0)
         {
            s=+i;
            ile++;
         }
}
