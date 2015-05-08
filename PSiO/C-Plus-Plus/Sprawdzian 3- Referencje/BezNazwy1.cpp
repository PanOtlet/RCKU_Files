#include <iostream>

using namespace std;

void pole_obwod1 (int a, int b, int h, int *p, int *o); 
void pole_obwod2 (int a, int b, int h, int &p, int &o); 

int main()
{
    int a,b,h,p,o;
    int *w_p=&p,*w_o=&o;
    cout<<"Podaj dlugosc a: ";
    cin>>a;
    cout<<"Podaj dlugosc b: ";
    cin>>b;
    cout<<"Podaj wysokosc h: ";
    cin>>h;
    pole_obwod1(a,b,h,w_p,w_o);
    cout<<"\nPole wynosi: "<<p<<'\n';
    cout<<"Obwod wynosi: "<<o<<'\n';
    pole_obwod2(a,b,h,p,o);
    cout<<"\nPole wynosi: "<<p<<'\n';
    cout<<"Obwod wynosi: "<<o<<'\n';
    cout<<'\n';
    system("pause");
    return 0;  
    
}

void pole_obwod1 (int a, int b, int h, int *p, int *o)
{
     *p=a*h;
     *o=(a*2)+(b*2);
}
void pole_obwod2 (int a, int b, int h, int &p, int &o)
{
     p=a*h;
     o=(a*2)+(b*2); 
}

    
