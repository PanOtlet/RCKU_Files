#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream dane,wyniki;
	dane.open("liczby.txt",ios::in);
	wyniki.open("parzyste.txt",ios::out);
	int liczba;
	while(!dane.eof())
	{
		dane>>liczba;
		if(liczba%2==0)
  		  wyniki<<liczba<<'\n';
	}
	dane.close();
	wyniki.close();
	return 0;
}
