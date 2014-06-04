#include<iostream>

using namespace std;

int main()
{
    string sl,sp;
    cout<<"Podaj zdanie";
    cin>>sl;
    cout<<"Nacisnij przycisk SPACJI,a nastepnie ENTER";
    cin>>sp;
    for (int i=0; i<=sl.length(); i++)
        if (sl[i]==sp[0])
           cout<<'\n';
        else
            cout<<sl[i];    
    system("pause");
    return 0;
}

