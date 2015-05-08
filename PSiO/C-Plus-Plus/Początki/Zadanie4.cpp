#include <iostream>

using namespace std;

int main()
{
    int x,a,b,c,d;
    cout<<"Podaj funkcje x: ";
    cin>>x;
    a=2*x+2;
    b=2*(x*x)+2*x-3;
    c=(x-3)*(x+3);
    d=(x+2)/(x-3);
    cout<<"a) y="<<a<<'\n';
    cout<<"b) y="<<b<<'\n';
    cout<<"c) y="<<c<<'\n';
    cout<<"d) y="<<d<<'\n';
    system("pause");
    return 0;
}
