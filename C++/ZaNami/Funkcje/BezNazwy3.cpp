#include <iostream>
using namespace std;

int znak(int);

int main()
{
    int a;
    cout<<"Podaj liczbe: ";
    cin>>a;
    if (znak(a)==-1)
       cout<<"Liczba ujemna";
    else if (znak(a)==1)
            cout<<"Liczba dodatnia";
         else
             cout<<"Liczba zero";
    cout<<'\n';
    system ("pause");
    return 0;
}

int znak(int b)
{
    if (b==0)
       return 0;
    else if (b<0)
           return -1;
         else
             return 1;
}
