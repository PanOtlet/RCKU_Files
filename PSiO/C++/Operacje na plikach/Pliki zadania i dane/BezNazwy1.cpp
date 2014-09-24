#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	int liczba,i=0,max=0,min=9999;
	string str;
	fstream plik("dane_1.txt");
        if( plik.good() == true )
        {
            while(!plik.eof())
            {
            	plik >> liczba;
            	if (liczba<min)
            	   min=liczba;
         	    else
         	   	   if(liczba>max)
   	   				 max=liczba;
                i++;
            }
            plik.close();
         }
        else
		cout<<"siewo"<<'\n';
		
	    cout<<"a):"<<i<<'\n';
        cout<<"b):"<<"min: "<<min<<"  max: "<<max<<'\n';
        cout<<"c):  ";
	    plik.open("dane_1.txt");
        if( plik.good() == true )
        {
            while(!plik.eof())
            {
 			   plik >> liczba;
 			   if(liczba%123==0)
                cout<<liczba<<"  ";
            }
     
            plik.close();
         }
         else
		cout<<"siewo"<<'\n';
		cout<<'\n';
		cout<<"d):  ";
	    plik.open("dane_1.txt");
        if( plik.good() == true )
        {
            while(!plik.eof())
            {
 			   
		        int tmp,suma=0;
				plik >> liczba;
				tmp=liczba;
				while(!tmp==0)
				{
				
 			     suma+=tmp%10;
 			     tmp=tmp/10;
				  }
				  if(suma==32)
				  cout<<liczba<<"  ";
            }
     
            plik.close();
         }
         else
		cout<<"siewo"<<'\n';
		cout<<'\n';
		 cout<<"e):  ";
		plik.open("dane_1.txt");
        if( plik.good() == true )
        {
            while(!plik.eof())
            {
 			   plik >> str;
 			   if((str[0]==str[1])&&(str[str.size()-1]==str[str.size()-2])&&(str[0]==str[str.size()-1]))
 			   {
 			   	cout<<str<<"  ";
               }
            }
     
            plik.close();
         }
         else
		cout<<"siewo"<<'\n';
	
	
	return 0;
}
