#include <iostream>

using namespace std;
int main()
{
    int a;
    cout<<"Podaj liczbe: ";
    cin>>a;
    if (a==0)
       cout<<"Liczba jest rowna zeru";
    else if (a%2==0);
            cout<<"Liczba jest parzysta";
         else
             cout<<"liczba jest nie parzysta";
    cout<<'\n';
    system("pause");
    return 0;
}
