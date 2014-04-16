#include <iostream>
#include <cmath>

using namespace std;

double max1 (double x, double y);
void max2 (double x, double y, double *z);
void max3 (double x, double y, double &z);

int main()
{
    double x,y,z;
    double *w_z=&z;
    cout<<"Program do dodawania"<<'\n'<<"Podaj liczbe x: ";
    cin>>x;
    cout<<"podaj liczbe y: ";
    cin>>y;
    cout<<'\n'<<"max1: "<<max1(x,y);
    max2(x,y,w_z);
    cout<<'\n'<<"max2: "<<z;
    max3(x,y,z);
    cout<<'\n'<<"max3: "<<z<<'\n'<<'\n';
    system("pause");
    return 0;
}

double max1 (double x, double y)
{
       double i;
       if (x>y)
          i=x;
       else
           i=y;
       return i;
}

void max2 (double x, double y, double *z)
{
     if (x>y)
        *z=x;
     else
         *z=y;
}

void max3 (double x, double y, double &z)
{
     if (x>y)
        z=x;
     else
         z=y;
}
