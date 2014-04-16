#include <iostream>
using namespace std;

int min(int,int,int);
int max(int,int,int);

int main()
{
    int a,b,c;
    cout<<"Podaj liczbe a: ";
    cin>>a;
    cout<<"Podaj liczbe b: ";
    cin>>b;
    cout<<"Podaj liczbe c: ";
    cin>>c;
    cout<<"Najwiêksza liczba to:  "<<max(a,b,c)<<'\n';
    cout<<"Najmniejsza liczba to: "<<min(a,b,c)<<'\n';
    system ("pause");
    return 0;
}

int max(int l1,int l2,int l3)
{
    int m;
    if (l1>l2)
       m=l1;
    else
        m=l2;
    if (l3>m)
       m=l3;
    return m;
}

int min(int l1,int l2,int l3)
{
    int m;
    if (l1<l2)
       m=l1;
    else
        m=l2;
    if (l3<m)
       m=l3;
    return m;
}
