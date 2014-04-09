#include<iostream>
#include<cmath>
using namespace std;

class odcinek
{
     
      double x_poc;
      double y_poc;
      double x_kon;
      double y_kon;
      public:
      odcinek (double x_p, double y_p, double x_k, double y_k)
      {
           x_poc=x_p;
           y_poc=y_p;
           x_kon=x_k;
           y_kon=y_k;
      }
	void wypisz()
	{
		cout<<"("<<x_poc<<","<<y_poc<<")";
		cout<<" ";
		cout<<"("<<x_kon<<","<<y_kon<<")";	
	
	}
 friend double dlu(odcinek od);
};
double dlu(odcinek od)
{
	double dl;
	dl=sqrt(pow(od.x_kon-od.x_poc,2)+pow(od.y_kon-od.y_poc,2));	
	return dl;
};
int main()
{
	double xp,yp,xk,yk;
	odcinek CD(0,0,3,0);
	cout<<"oto towje wspolzrendene CD:\n";
	CD.wypisz();
	cout<<'\n'<<"dlugosc CD:";
	cout<<dlu(CD)<<'\n';
	cout<<"podaj wspulrzedne odcinka AB:\n";
	cout<<"podaj poczantek (x)";
	cin>>xp;
	cout<<"podaj poczantek (y)";
	cin>>yp;
	cout<<"podaj koniec (x)";
	cin>>xk;
	cout<<"podaj koniec (y)";
	cin>>yk;
	odcinek AB(xp,yp,xk,yk);
	cout<<"oto towje wspolzrendene:\n";
	AB.wypisz();
	cout<<'\n'<<"dlugosc AB:";
	cout<<dlu(AB)<<'\n';
	
}
