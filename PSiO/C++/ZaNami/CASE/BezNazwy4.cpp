#include <iostream>
using namespace std;
int main()
{
 int numer,rok;
 cout<<"Podaj numer miesiaca: ";
 cin>>numer;
 
 switch (numer)
        {
        case 1 : 
        case 3 : 
        case 5 : 
        case 7 : 
        case 8 : 
        case 10: 
        case 12: cout<<"Ten miesiac ma 31 dni!"; break;
        case 4 : 
        case 6 : 
        case 9 : 
        case 11: cout<<"Ten miesiac ma 30 dni!"; break;
        case 2 : cout<<'\n'<<"Podaj rok: ";
                 cin>>rok;
                 if (rok%4==0 && rok%100>=1 || rok%400==0)
                    cout<<"Ten miesiac ma 29 dni!";
                 else
                     cout<<"Ten miesiac ma 28 dni!"; break;
        default: cout<<"O ile sie nie myle, to nie ma takiego miesiaca :)";
        }
 cout<<'\n';
 system("pause");
 return 0;
}
