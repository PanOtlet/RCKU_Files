#include <iostream>

using namespace std;

void dodaj (int a)
{
     a=a+3;
     cout<<"dodaj(), a = "<<a;
}

int main()
{
    int a=10;
    cout<<"main(), a = "<<a<<'\n';
    dodaj(a);
    cout<<"\nmain(), a = "<<a<<'\n';
    system("pause");
    return 0;
}
