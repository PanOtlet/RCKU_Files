#include <iostream>

using namespace std;

void dodaj (int *wskaznik)
{
     *wskaznik=*wskaznik+3;
     cout<<"dodaj(), a = ";
     cout<<*wskaznik;
}

int main()
{
    int a=10;
    int *wskaznik_a=&a;
    cout<<"main(), a = "<<a<<'\n';
    dodaj(wskaznik_a);
    cout<<"\nmain(), a = "<<a<<'\n';
    system("pause");
    return 0;
}
