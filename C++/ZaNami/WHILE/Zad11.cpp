#include <iostream>
using namespace std;
int main()
{
    int liczba,ile,i;
    cout<<"Podaj liczbe calkowita: ";
    cin>>liczba;
    ile=0;
    for (i=1;i<=liczba;i++)
        if (liczba%i==0)
           ile++;
    if (ile==2)
       cout<<"Podana liczba jest pierwsza";
    else
        cout<<"Podana liczba jest zlozona";
    cout<<'\n';
    system("pause");
    return 0;
}
