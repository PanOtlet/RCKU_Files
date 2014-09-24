#include <iostream>
#include <string>
#include <fstream>

using namespace std;

 /*void save(string a)
    {
    	string fname=a;
        ofstream plik(fname.c_str());
        if( plik.good() == true )
        {
            plik << name<<'\n';
            plik << hp<<'\n';
            plik << att<<'\n';
            plik << ar<<'\n';
            plik << xpv<<'\n';
            plik.close();
        }
        else;
    }
    void load(string a)
    {
    	string fname=a;
        fstream plik(fname.c_str());
        if( plik.good() == true )
        {
            plik >> name;
            plik >> hp;
            plik >> att;
            plik >> ar;
            plik >> xpv;
            plik.close();
        }
        else;
    }
    void wypisz(string a)
    {
       sitring fname=a;
       cout<<"nazwa mobka: "<<name<<'\n';
       cout<<"Hp mobka: "<<hp<<'\n';
       cout<<"atak mobka: "<<att<<'\n';
       cout<<"pancez mobka: "<<ar<<'\n';
       cout<<"exp za mobka: "<<xpv<<'\n';
    }

*/
/*int tmp,i=2,suma=0;
				plik >> liczba;
				tmp=liczba;
				while(tmp>=1)
 			   if(tmp%i==0)
 			     {
 			     tmp=tmp/i;
 			     suma+=i;
 			 }
		       else
		        i++;
		        if(suma==32)
		        cout<<liczba;*/
int main()
{
	int liczba,i=0,max=0,min=9999;
	string str;
	fstream plik("dane_1.txt");
        if( plik.good() == true )
        {
        	//cout<<"c)liczby podzielne przez 123:  ";
        	//int liczba,i=0,max=0,min=9999;
            while(!plik.eof())
            {
            	plik >> liczba;
            	if (liczba<min)
            	   min=liczba;
         	    else
         	   	   if(liczba>max)
   	   				 max=liczba;
                //if(liczba%123==0)
                //cout<<liczba<<"  ";
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
 			   {//if(liczba%123==0)
 			   cout<<str<<"  ";
 			   /*cout<<str[0]<<" ";
  			   cout<<str[1]<<'\n';
 			   cout<<str[str.size()-1]<<" ";
 			   cout<<str[str.size()-2]<<'\n';*/
 			   
                //cout<<str<<"  ";
            }
            }
     
            plik.close();
         }
         else
		cout<<"siewo"<<'\n';
	
	
	return 0;
}
