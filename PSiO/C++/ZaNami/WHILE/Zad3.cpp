#include <iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"Podaj liczbe a: ";
    cin>>a; 
    for (i=10;i<=a;i++)
    if (a%i==0)
       cout<<i<<"\n";
    system("pause");
    return 0;
}
