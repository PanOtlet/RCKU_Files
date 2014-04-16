#include <iostream>
using namespace std;

int suma(int,int);

int main()
{
    int a,b;
    cout<<"Podaj poczatek przedzialu: ";
    cin>>a;
    cout<<"Podaj koniec przedzialu: ";
    cin>>b;
    cout<<"Suma liczb calkowitych wynosi: "<<suma(a,b);
    cout<<'\n';
    system ("pause");
    return 0;
    
}

int suma (int a, int b)
{
    int i,j;
    for (int i=a;b<=i;i++);
        if (i%2==0)
           if (i%3==0)
              j=j+i;
    return j;
}
