#include <iostream>

using namespace std;
int main()
{
    float a;
    cout<<"Podaj liczbe a=";
    cin>>a;
    if (a>0)
       cout<<"Liczba jest dodatnia";
    else if (a<0)
            cout<<"Liczba jest ujemna";
         else
             cout<<"liczba jest rowna zeru";
    cout<<'\n';
    system("pause");
    return 0;
}
