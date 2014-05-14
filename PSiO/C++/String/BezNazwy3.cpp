#include<iostream>
#include<string>

using namespace std;

int main()
{
    string sl;
    int li;
    bool p=true;
    cout<<"Podaj palindrom: ";
    cin>>sl;
    for (int i=0; i<=sl.length()/2; i++)
        if (sl[i]!=sl[sl.length()-1-i])
        {
           p=false;
           break;
        }
    if (p)
       cout<<"Slowo jest palindromem";
    else
        cout<<"Slowo nie jest palindromem";
    cout<<'\n';
    system("pause");
}
