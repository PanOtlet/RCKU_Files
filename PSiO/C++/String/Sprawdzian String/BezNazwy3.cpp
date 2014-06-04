#include<iostream>

using namespace std;

int main()
{
    string sl,big;
    int a=0,b=0;
    cout<<"Podaj slowo: ";
    cin>>sl;
    cout<<"Podaj slowo, ale tym razem z tylko duzych liter: ";
    cin>>big;
    for (int i=0; i<=sl.length(); i++)
        if (sl[i]==big[i])
           a++;
        else
            b++;
    cout<<"W slowie jest "<<a-1<<" duzych liter i "<<b-1<<" malych liter."; 
    system("pause");
    return 0;
}

