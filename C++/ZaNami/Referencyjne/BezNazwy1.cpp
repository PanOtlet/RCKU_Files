#include <iostream>

using namespace std;

void pole_obwod1 (double a, double b, double *p, double *o);
void pole_obwod2 (double a, double b, double &p, double &o);

int main()
{
    double bok1,bok2,pole,obwod;
    double *w_pole=&pole, *w_obwod=&obwod;
    cout<<"Podaj boki prostokata: ";
    cin>>bok1;
    cout<<"Podaj boki prostokata: ";
    cin>>bok2;
    pole_obwod1(bok1,bok2,w_pole,w_obwod);
    cout<<"Obliczenia wykonane za pomoca fukncji pole_obwod1:\n";
    cout<<"Pole wynosi: "<<pole<<'\n';
    cout<<"Obwod wynosi: "<<obwod<<'\n';
    pole_obwod2(bok1,bok2,pole,obwod);
    cout<<"Obliczenia wykonane za pomoca fukncji pole_obwod2:\n";
    cout<<"Pole wynosi: "<<pole<<'\n';
    cout<<"Obwod wynosi: "<<obwod<<'\n';
    system("pause");
    return 0;
}

void pole_obwod1 (double a, double b, double *p, double *o)
{
     *p=a*b;
     *o=2*(a+b);
}
void pole_obwod2 (double a, double b, double &p, double &o)
{
     p=a*b;
     o=2*(a+b);
}
