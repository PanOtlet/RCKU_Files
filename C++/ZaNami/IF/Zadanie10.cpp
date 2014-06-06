#include <iostream>

using namespace std;
int main()
{
    int a,b;
    cout<<"Podaj liczbe a: ";
    cin>>a;
    cout<<"Podaj liczbe b: ";
    cin>>b;
    if (a==0)
       if (b==0)
          cout<<"Nieskonczenie wiele rozwiazan";
       else
           cout<<"Brak rozwiazan";
    else
       cout<<"-("<<b<<"/"<<a<<")= "<<"-"<<b/a;
    cout<<'\n';
    system("pause");
    return 0;
}
