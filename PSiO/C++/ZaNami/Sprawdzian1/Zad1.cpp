#include <iostream>

using namespace std;
int main()
{
    int a,b;
    cout<<"Podaj liczbe a: ";
    cin>>a;
    cout<<"Podaj liczbe b: ";
    cin>>b;
    if (a==b)
       cout<<"Liczby sa rowne";
       else if (a>b)
               cout<<"Liczba a jest wieksza od liczby b jest mniejsza "<<a/b<<" razy";
               else
               cout<<"Liczba b jest wieszka od liczby a jest mniejsza "<<b/a<<" razy";     
    cout<<'\n';
    system("pause");
    return 0;
}
