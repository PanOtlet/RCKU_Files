#include<iostream>
#include<cmath>
#include<string>

using namespace std;

class FK
{
      private:
              double aa;
              double bb;
              double cc;
      public:
             FK()
             {
              aa=0;
              bb=0;
              cc=0;
             }
             FK (double a, double b, double c)
             {
              aa=a;
              bb=b;
              cc=c;
             }
             float delta();
             float miej0();
             void wypisz();
};

float FK::delta()
{
    return (bb*bb)-(4*aa*cc);
}

float FK::miej0()
{   
    double y1,y2;
    cout<<"Delta wynosi: "<<delta()<<'\n';
    if (delta()<0)
       cout<<"Funkcja kwadratowa nie ma miejsc zerowych";
    else if (delta()==0)
            cout<<"x0="<<(-(bb))/(2*aa)<<'\n';
    else
    {
        y1=(-(bb)-sqrt(delta()))/(2*aa);
        y2=(-(bb)+sqrt(delta()))/(2*aa);
        cout<<"x1="<<y1<<'\n'<<"x2="<<y2<<'\n';
    }
}

void FK::wypisz()
{
     cout<<'\n';
     miej0();
}

int main()
{
    double a,b,c;
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Podaj c: ";
    cin>>c;
    FK zz(a,b,c);
    zz.wypisz();
    cout<<'\n';
    system ("pause");
    return 0;
}
