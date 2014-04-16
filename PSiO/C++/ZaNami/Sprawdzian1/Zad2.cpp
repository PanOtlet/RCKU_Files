#include <iostream>

using namespace std;
int main()
{
    int a,b;
    cout<<"Podaj liczbe a: ";
    cin>>a;
    if (a%4>0)
       cout<<"Liczba nie jest podzielna przez 4 \n";
       else
           cout<<"Liczba jest podzielna przez 4 \n";
    if (a%7>0)
       cout<<"Liczba nie jest podzielna przez 7 \n";
       else
           cout<<"Liczba jest podzielna przez 7 \n";   
    cout<<'\n';
    system("pause");
    return 0;
}
