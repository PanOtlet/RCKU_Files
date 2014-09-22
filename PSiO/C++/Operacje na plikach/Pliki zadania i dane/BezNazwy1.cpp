#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream plik,wyniki;
	plik.open("dane_1.txt", ios::in);
	wyniki.open("wyniki_1.txt", ios::out);
	int a,liczba,ile=0,min=100000,max=999;
	string s,liczby123=" ",liczby32=" ";
	while(!plik.eof())
	{
 	 plik>>liczba;
	 ile++; 
	 if (min>liczba)
	 	min=liczba;
	 if (max<liczba)
	 	max=liczba;
	}
	plik.close();
	cout<<"Liczba liczb: "<<ile<<'\n';
	cout<<"Najmniejsza liczba: "<<min<<'\n';
	cout<<"Najwieksza liczba: "<<max<<'\n';
	return 0;
}
