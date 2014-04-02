#include <iostream>
#include <cmath>

using namespace std;

double suma1 (double a, double b);
void suma2 (double a, double b, double *s);
void suma3 (double a, double b, double &s);

int main()
{
    double a,b,s;
    double *w_s=&s;
    cout<<"Program do dodawania"<<'\n'<<"Podaj liczbe a: ";
    cin>>a;
    cout<<"podaj liczbe b: ";
    cin>>b;
    cout<<'\n'<<"suma1: "<<suma1(a,b);
    suma2(a,b,w_s);
    cout<<'\n'<<"suma2: "<<s;
    suma3(a,b,s);
    cout<<'\n'<<"suma3: "<<s<<'\n'<<'\n';
    system("pause");
    return 0;
}

double suma1 (double a, double b)
{
       double i=0;
       for (int j=a;j<=b;j++)
           if ((int) j%2==0)
              i+=j;
       return i;
}

void suma2 (double a, double b, double *s)
{
     *s=0;
       for (int j=a;j<=b;j++)
           if ((int) j%2==0)
              *s+=j;
}

void suma3 (double a, double b, double &s)
{
     s=0;
       for (int j=a;j<=b;j++)
           if ((int) j%2==0)
              s+=j;
}
