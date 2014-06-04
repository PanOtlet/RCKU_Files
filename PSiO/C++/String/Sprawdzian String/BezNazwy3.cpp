#include<iostream>

using namespace std;

int main()
{
    string sl;
    cout<<"Podaj zdanie";
    cin>>sl;
    for (int i=0; i<=sl.length(); i++)
        if (sl[i]==sp[0])
           cout<<'\n';
        else
            cout<<sl[i];    
    system("pause");
    return 0;
}

