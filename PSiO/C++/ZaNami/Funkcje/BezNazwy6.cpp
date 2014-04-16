#include <iostream>
using namespace std;

int nwd(int,int);

int main()
{
    int l,m,l1,m1;
    cout<<"Podaj licznik ulamka: ";
    cin>>l;
    cout<<"Podaj mianownik ulamka: ";
    cin>>m;
    l1=l/nwd(l,m);
    m1=m/nwd(l,m);
    if (l==m)
       cout<<"Wynik: "<<l;
    else 
    if (l==l1)
       cout<<"Ulamek nieskracalny";
    else
        cout<<"Ulamek po skroceniu: "<<l1<<"/"<<m1;
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
