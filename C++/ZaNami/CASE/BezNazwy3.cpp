#include <iostream>
using namespace std;
int main()
{
 int numer;
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
        case 2 : cout<<"Ten miesiac ma 28 dni!"; break;
        case 4 : cout<<"Ten miesiac ma 28 dni!";
        case 6 : cout<<"Ten miesiac ma 28 dni!";
        case 9 : cout<<"Ten miesiac ma 28 dni!";
        case 11: cout<<"Ten miesiac ma 28 dni!"; break;
        default: cout<<"O ile sie nie myle, to nie ma takiego miesiaca :)";
        }
 cout<<'\n';
 system("pause");
 return 0;
}
