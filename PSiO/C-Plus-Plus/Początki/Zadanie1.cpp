#include <iostream>

using namespace std;

int main()
{
    int a,b,suma,roznica,iloczyn;
    float iloraz;
    cout<<"Podaj liczb� calkowita a: ";
    cin>>a;
    cout<<"Podaj liczb� calkowita b: ";
    cin>>b;
    suma=a+b;
    roznica=a-b;
    iloczyn=a*b;
    iloraz=(float)a/b;
    cout<<"Suma="<<suma<<'\n';
    cout<<"Roznica="<<roznica<<'\n';
    cout<<"Iloczyn="<<iloczyn<<'\n';
    cout<<"Iloraz="<<iloraz<<'\n';
    system("pause");
    return 0;
}
