#include <iostream>
#include <cmath>

using namespace std;

int rownanie1 (double a, double b, double c, double &x1, double &x2);
int rownanie2 (double a, double b, double c, double *x1, double *x2);

int main()
{
    double a,b,c,x1,x2;
    int ile;
    double *w_x1=&x1,*w_x2=&x2;
    cout<<"Program do obliczenia rownania kwadratowego"<<'\n'<<"Podaj liczbe a: ";
    cin>>a;
    cout<<"podaj liczbe b: ";
    cin>>b;
    cout<<"podaj liczbe c: ";
    cin>>c;
    cout<<'\n'<<"Rownanie: "<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<'\n';
    cout<<'\n'<<"Funkcja rownanie1:"<<'\n';
    ile=rownanie1(a,b,c,x1,x2);
    if (ile==0)
       cout<<"Wynik: Brak miejsc zerowych i zadanie nie zostanie wykonane"<<'\n';
    else if (ile==1)
         cout<<"Wynik: 1 miejsce zerowe"<<'\n';
    else
         cout<<"Wynik: 2 miejsca zerowe"<<'\n'<<'\n';   
    cout<<'\n'<<"Funkcja rownanie2:"<<'\n';
    ile=rownanie2(a,b,c,w_x1,w_x2);
    if (ile==0)
       cout<<"Wynik: Brak miejsc zerowych i zadanie nie zostanie wykonane"<<'\n';
    else if (ile==1)
         cout<<"Wynik: 1 miejsce zerowe"<<'\n';
    else
         cout<<"Wynik: 2 miejsca zerowe"<<'\n'; 
    cout<<'\n';      
    system("pause");
    return 0;
}

int rownanie1 (double a, double b, double c, double &x1, double &x2)
{
    double s,d;
    s=b*b-4*a*c;
    d=sqrt(s);
    if (s>0)
    {
       x1=(-b-d)/(2*a);
       x2=(-b+d)/(2*a);
       return 2;
    }
    else if (s==0)
    {
        x1=-b/(2*a);
        x2=x1;
        return 1;
    }
    else
        return 0;
}

int rownanie2 (double a, double b, double c, double *x1, double *x2)
{
    double s,d;
    s=b*b-4*a*c;
    d=sqrt(s);
    if (s>0)
    {
       *x1=(-b-d)/(2*a);
       *x2=(-b+d)/(2*a);
       return 2;
    }
    else if (s==0)
    {
        *x1=-b/(2*a);
        return 1;
    }
    else
        return 0;
}
