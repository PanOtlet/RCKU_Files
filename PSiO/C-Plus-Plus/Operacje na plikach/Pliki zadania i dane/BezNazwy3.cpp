#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string str,nazwa_p="hasla.txt";
	int p=0,np=0,i=0;
	fstream plik;
		plik.open(nazwa_p.c_str());
        if( plik.good() == true )
        {
            while(!plik.eof())
            {
             plik >> str;	
 			 if(str.size()%2==0)
			   p++;
			 else
			   np++;  
            }
            cout<<"a:"<<'\n';
            cout<<"paryste: "<<p <<'\n';
            cout<<"nieparyste: "<<np <<'\n';
            plik.close();
         }
         else
		cout<<"siewo"<<'\n';
	
	
	return 0;
}
