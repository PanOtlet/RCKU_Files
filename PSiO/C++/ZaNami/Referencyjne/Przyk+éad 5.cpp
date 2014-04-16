#include <iostream>
#include <cmath>

using namespace std;

void rk (float a, float b, float c, float &x1, float &x2)
{
     double delta;
     delta=b*b-4*a*c;
     if (delta==0)
     {
        x1=-b/(2*a);
        x2=x1;
     }
     else if (delta>0)
     {
          delta=sqrt(delta);
          x1=(-b-delta)/(2*a);
          x2=(-b+delta)/(2*a);
     }         
}

int main()
{
    float a,b,c,x1,x2;
    cout<<"Podaj wartosc a=";
    cin>>a;
    cout<<"Podaj wartosc b=";
    cin>>b;
    cout<<"Podaj wartosc c=";
    cin>>c;
    rk(a,b,c,x1,x2);
    if (b*b-4*a*c>=0)
       cout<<"Wartosci: x1="<<x1<<" oraz x2="<<x2<<'\n';
    else
        cout<<"Rownanie nie ma pierwiastkow\n";
    system("pause");
    return 0;
}
