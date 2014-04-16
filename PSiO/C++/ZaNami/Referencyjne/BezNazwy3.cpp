#include <iostream>
#include <cmath>

using namespace std;

double sum1 (double x, double y);
void sum2 (double x, double y, double *z);
void sum3 (double x, double y, double &z);

int main()
{
    double x,y,z;
    double *w_z=&z;
    cout<<"Program do dodawania"<<'\n'<<"Podaj liczbe x: ";
    cin>>x;
    cout<<"podaj liczbe y: ";
    cin>>y;
    cout<<'\n'<<"sum1: "<<sum1(x,y);
    sum2(x,y,w_z);
    cout<<'\n'<<"sum2: "<<z;
    sum3(x,y,z);
    cout<<'\n'<<"sum3: "<<z<<'\n'<<'\n';
    system("pause");
    return 0;
}

double sum1 (double x, double y)
{
       double i;
       i=x+y;
       return i;
}

void sum2 (double x, double y, double *z)
{
     *z=x+y;
}

void sum3 (double x, double y, double &z)
{
     z=x+y;
}
