#include <iostream>
#include <cmath>

using namespace std;

double min1 (double x, double y);
void min2 (double x, double y, double *z);
void min3 (double x, double y, double &z);

int main()
{
    double x,y,z;
    double *w_z=&z;
    cout<<"Program do dodawania"<<'\n'<<"Podaj liczbe x: ";
    cin>>x;
    cout<<"podaj liczbe y: ";
    cin>>y;
    cout<<'\n'<<"min1: "<<min1(x,y);
    min2(x,y,w_z);
    cout<<'\n'<<"min2: "<<z;
    min3(x,y,z);
    cout<<'\n'<<"min3: "<<z<<'\n'<<'\n';
    system("pause");
    return 0;
}

double min1 (double x, double y)
{
       double i;
       if (x<y)
          i=x;
       else
           i=y;
       return i;
}

void min2 (double x, double y, double *z)
{
     if (x<y)
        *z=x;
     else
         *z=y;
}

void min3 (double x, double y, double &z)
{
     if (x<y)
        z=x;
     else
         z=y;
}
