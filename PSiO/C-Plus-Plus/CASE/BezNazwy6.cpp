#include <iostream>
using namespace std;
int main()
{
 int numer;
 cout<<"Podaj numer miesiaca: ";
 cin>>numer;
 
 switch (numer)
        {
        case 12: 
        case 1 : 
        case 2 : cout<<"Zima"; break;
        case 3 : 
        case 4 : 
        case 5 : cout<<"Wiosna"; break;
        case 6 : 
        case 7 : 
        case 8 : cout<<"Lato"; break;
        case 9 : 
        case 10: 
        case 11: cout<<"Jesien"; break;
        default: cout<<"O ile sie nie myle, to nie ma takiego miesiaca :)";
        }
 cout<<'\n';
 system("pause");
 return 0;
}
