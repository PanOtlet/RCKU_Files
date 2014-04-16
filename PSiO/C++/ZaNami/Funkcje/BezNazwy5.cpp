#include <iostream>
using namespace std;

int nwd(int,int);
int mianownik(int,int);

int main()
{
    int l1,l2,l3,m1,m2,m3;
    cout<<"Podaj licznik ulamka 1: ";
    cin>>l1;
    cout<<"Podaj mianownik ulamka 1: ";
    cin>>m1;
    cout<<"Podaj licznik ulamka 2: ";
    cin>>l2;
    cout<<"Podaj mianownik ulamka 2: ";
    cin>>m2;
    m3=mianownik(m1,m2);
    l3=l1*(m3/m1)+l2*(m3/m2);
    cout<<"Suma ulamkow wynosi: "<<l3<<"/"<<m3;
    cout<<'\n';
    system ("pause");
    return 0;
}

int nwd (int a, int b)
{
int r;
while (b>0)
 {
   r=a % b;
   a=b;
   b=r;
  }
return a;
}

int mianownik (int a, int b)
{
 return (a*b)/nwd(a,b);
}
