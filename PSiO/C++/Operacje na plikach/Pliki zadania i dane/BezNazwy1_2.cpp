#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream plik,wyniki;
	plik.open("dane_1.txt", ios::in);
	wyniki.open("wyniki_1.txt", ios::out);
	string liczba,s,liczby123=" ",liczby32=" ";
	while(!plik.eof())
	{
 	 plik>>liczba;
	 if (liczba%123==0)
	 	cout<<liczba<<", ";
	}
	plik.close();
	cout<<"Liczba liczb: "<<ile<<'\n';
	cout<<"Najmniejsza liczba: "<<min<<'\n';
	cout<<"Najwieksza liczba: "<<max<<'\n';
	return 0;
}
