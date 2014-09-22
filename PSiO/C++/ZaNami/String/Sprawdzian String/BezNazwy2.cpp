#include<iostream>

using namespace std;

int main()
{
    string sl;
    cout<<"Podaj zdanie: ";
    cin>>sl;
    cout<<'\n';
    for (int i=0; i<=sl.length(); i++)
        if (sl[i]==' ')
           cout<<'\n';
        else
            cout<<sl[i];
    cout<<'\n';    
    system("pause");
    return 0;
}

