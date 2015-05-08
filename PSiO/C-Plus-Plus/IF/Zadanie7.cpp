#include <iostream>

using namespace std;
int main()
{
    int a,b,c;
    cout<<"Podaj liczbe a: ";
    cin>>a;
    cout<<"Podaj liczbe b: ";
    cin>>b;
    cout<<"Podaj liczbe c: ";
    cin>>c;
    if (a>b)
       if (a>c)
          cout<<"Najwieksza liczba jest: "<<a;
       else
          cout<<"Najwieksza liczba jest: "<<c;
    else if (b>c)
            cout<<"Najwieksza liczba jest: "<<b;
         else
            cout<<"Najwieksza liczba jest: "<<c;
    cout<<'\n';
    system("pause");
    return 0;
}
