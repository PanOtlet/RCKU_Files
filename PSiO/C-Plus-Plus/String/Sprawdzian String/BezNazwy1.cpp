#include<iostream>

using namespace std;

int main()
{
    string i1,i2;
    int t;
    cout<<"Podaj dwa napisy \n";
    cout<<"Napis 1: ";
    cin>>i1;
    cout<<"Napis 2: ";
    cin>>i2;
    cout<<"Podobne literki: \n";
    for (int i=0; i<=i1.length(); i++)
        if (i1[i]==i2[i])
           cout<<"Pozycja: "<<i<<": "<<i1[i]<<'\n';
    system("pause");
    return 0;
}

