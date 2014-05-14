#include<iostream>
#include<string>

using namespace std;

int main()
{
    string sl;
    char sz;
    int li=0;
    cout<<"Podaj tekst: "<<'\n';
    cin>>sl;
    cout<<"Podaj wyszukiwany znak: ";
    cin>>sz;
    for (int i=0; i<=sl.length(); i++)
        if (sl[i]==sz)
           li++;
    cout<<"W slowie '"<<sl<<"' jest "<<li<<" literek "<<sz;
    cout<<'\n';
    system("pause");
}
