#include <iostream>
using namespace std;
int main()
{
 int a,b,w;
 char z;
 cout<<"Podaj typ obliczen: ";
 cin>>z; 
 if (z==6)
 {
    cout<<"Podaj liczbe: ";
    cin>>a;
 }
 else
 {
     cout<<"Podaj pierwsza liczbe: ";
     cin>>a;
     cout<<"Podaj druga liczbe: ";
     cin>>b;
 }
 switch (z)
        {
        case '+' : w=a+b; break;
        case '-' : w=a-b; break;
        case '*' : w=a*b; break;
        case '/' : w=a/b; break;
        case '%' : w=a%b; break;
        case '^' : w=a*a; break;
        default: cout<<"Widac jestes madrzejszy ode mnie i musisz to sam obliczyc!"; break;
        }
 cout<<"Wynik: "<<w;
 cout<<'\n';
 system("pause");
 return 0;
}
