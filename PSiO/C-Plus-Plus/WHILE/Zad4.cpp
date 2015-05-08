#include <iostream>
using namespace std;
int main()
{
    int a,i,l;
    cout<<"Podaj liczbe a: ";
    cin>>a;
    l=0; 
    for (i=1;i<=a;i++)
    if (a%i==0)
    {
       cout<<i<<"\n";
       l++;
    }
    cout<<"Ilosc dzielnikow: "<<l<<'\n';
    system("pause");
    return 0;
}
