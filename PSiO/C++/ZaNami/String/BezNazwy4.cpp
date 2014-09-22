#include<iostream>
#include<string>

using namespace std;

int main()
{
    string sl;
    int li=0;
    cout<<"Podaj slowo: ";
    cin>>sl;
    for (int i=0; i<=sl.length(); i++)
        if (sl[i]=='a')
           li++;
    cout<<"W slowie '"<<sl<<"' jest "<<li<<" literek 'a'";
    cout<<'\n';
    system("pause");
}
