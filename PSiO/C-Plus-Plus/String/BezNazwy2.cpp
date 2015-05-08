#include<iostream>
#include<string>

using namespace std;

int main()
{
    string slowo;
    cout<<"Podaj slowo: ";
    cin>>slowo;
    for (int i=slowo.length()-1;i>=0;i--)
        cout<<slowo[i];
    cout<<'\n';
    system("pause");
}
