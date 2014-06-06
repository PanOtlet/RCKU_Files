#include <iostream>
#include <cmath>

using namespace std;

struct punkt
{
       double wsp_x;
       double wsp_y;
};

int main()
{
    punkt A,B;
    double dlugosc;
    cout<<"Podaj wspolrzedna X punktu A: ";
    cin>>A.wsp_x;
    cout<<"Podaj wspolrzedna Y punktu A: ";
    cin>>A.wsp_y;
    cout<<"Podaj wspolrzedna X punktu B: ";
    cin>>B.wsp_x;
    cout<<"Podaj wspolrzedna Y punktu B: ";
    cin>>B.wsp_y;
    system ("cls");
    dlugosc=sqrt(pow(B.wsp_x-A.wsp_x,2)+pow(B.wsp_y-A.wsp_y,2));
    cout<<"Dlugosc odcinka AB wynosi: "<<dlugosc<<"\n\n";
    system("pause");
    return 0;
}
