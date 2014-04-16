#include <iostream>

using namespace std;
int main()
{
    int a,b,c;
    cout<<"Podaj liczbe a: ";
    cin>>a;
    cout<<"Podaj liczbe b: ";
    cin>>b;
    cout<<"Podaj liczbe c: ";
    cin>>c;
    if ((a+b>c) && (a+c>b) && (b+c>a))
       cout<<"Bedzie trojkat: ";
       if ((a2+b2-c2)*(a2+c2-b2)*(b2+c2-a2)<0)
          cout<<"ostrokatny";
       else
           if ((a2+b2-c2)*(a2+c2-b2)*(b2+c2-a2)=0)
              cout<<"prostokatny";
           else
           if ((a2+b2-c2)*(a2+c2-b2)*(b2+c2-a2)>0)
              cout<<"rozwartokatny";               
    else
        cout<<"Nie bedzie trojkata";     
    cout<<'\n';
    system("pause");
    return 0;
}
