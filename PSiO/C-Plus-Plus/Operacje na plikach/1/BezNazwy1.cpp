#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream plik;
	plik.open("dane.txt", ios::in);
	if (plik.good())
	{
		string napis;
		cout<<"Zawartosc pliku:"<<endl;
		while(!plik.eof())
		{
			getline(plik,napis);
			cout<<napis<<endl;
		}
		plik.close();
	}
	else
		cout<<"Nie ma pliku";
	return 0;
}
