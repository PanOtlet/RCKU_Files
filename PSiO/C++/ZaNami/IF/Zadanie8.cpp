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
          if (b>c)
             cout<<"Srodkowa liczba jest: "<<b;
          else
              cout<<"Srodkowa liczba jest: "<<c;
       else
          cout<<"Srodkowa liczba jest: "<<a;
    else if (b>c)
            if (a>c)
               cout<<"Srodkowa liczba jest: "<<a;
            else
                cout<<"Srodkowa liczba jest: "<<c;
         else
             cout<<"Srodkowa liczba jest: "<<b;       
    cout<<'\n';
    system("pause");
    return 0;
}
