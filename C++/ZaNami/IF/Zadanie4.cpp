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
       cout<<a<<", "<<b;
    else if (a>b)
            cout<<"Liczba a jest wieksza";
         else
             cout<<"Liczba b jest wieksza";
    cout<<'\n';
    system("pause");
    return 0;
}
