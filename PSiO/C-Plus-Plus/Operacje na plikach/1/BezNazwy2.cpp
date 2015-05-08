#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream plik;
	plik.open("zapis.txt", ios::out);
	cout<<"Podaj ile linijek chcesz zapisac: ";
	int ile;
	cin>>ile;
	cin.ignore();
	for (int i=1;i<=ile;i++)
	{
		string linijka;
		getline(cin,linijka);
		plik<<linijka<<'\n';
	}
	plik.close();
	return 0;
}
