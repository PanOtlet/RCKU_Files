#include <iostream>
using namespace std;

int nwd(int,int);
int nww(int,int);

int main()
{
    int i,j;
    cout<<"Podaj liczbe 1: ";
    cin>>i;
    cout<<"Podaj liczbe 2: ";
    cin>>j;
    cout<<"NWD: "<<nwd(i,j)<<'\n';
    cout<<"NWW: "<<nww(i,j);
    cout<<'\n';
    system ("pause");
    return 0;
}

int nwd (int a, int b)
{
int r;
while (b>0)
 {
   r=a % b;
   a=b;
   b=r;
  }
return a;
}

int nww (int a, int b)
{
 return (a*b)/nwd(a,b);
}
